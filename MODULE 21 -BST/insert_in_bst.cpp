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
void level_order(node* root)
{
    queue<node*>q;
    if(root) q.push
    (root);
    while(!q.empty())
    {
        node* pr=q.front();
        q.pop();
        cout<<pr->val<<" ";
        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);
    }

}
void insert(node* &root,int x)
{
    if(root==nullptr)
    {
        root=new node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left==NULL)
        {
            root->left=new node(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    if(x>root->val)
    {
        if(root->right==NULL)
        {
            root->right=new node(x);
        }
        else
        {
            insert(root->right,x);
        }
    }

}
int main()
{
    node* root=input_tree();
    // int x;
    // cin>>x;
    insert(root,13);
    insert(root,32);
    insert(root,27);
    insert(root,22);
    level_order(root);
    return 0;
}
