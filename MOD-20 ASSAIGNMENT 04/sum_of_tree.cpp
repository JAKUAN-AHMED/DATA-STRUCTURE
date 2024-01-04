#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* input_tree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node* parent=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* newLeft;
        node* newRigt;
        if(l==-1) newLeft=NULL;
        else newLeft=new node(l);
        if(r==-1) newRigt=nullptr;
        else newRigt=new node(r);
        parent->left=newLeft;
        parent->right=newRigt;
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
bool flag=false;
void preOrder(node* root) 
{
    //base case
    if(root==NULL)
    {
        return;
    }

    if(root->left!=nullptr && root->right==NULL || root->left==nullptr && root->right!=NULL)
    {
        flag=true;
    }
    preOrder(root->left);
    preOrder(root->right);
} 

int main()
{

    node* root=input_tree();
    preOrder(root);
    if(flag==true) cout<<"NO";
    else cout<<"YES";
    return 0;
}
