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
        this->left=nullptr;
        this->right=nullptr;
    }

};
node* input_tree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=nullptr;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node* parent=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* newleft;
        node* newRight;
        if(l==-1) newleft=nullptr;
        else newleft=new node(l);
        if(r==-1) newRight=nullptr;
        else newRight=new node(r);
        parent->left=newleft;
        parent->right=newRight;
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
bool search(node* root,int x)
{
    if(root==nullptr) return false;
    if(root->val==x)
    {
        return true;
    }
     if(x<root->val)
    {
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}
int main()
{
    node* root=input_tree();
   
    return 0;
}
