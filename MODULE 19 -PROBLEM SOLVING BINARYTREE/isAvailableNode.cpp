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
    if(val==-1) root==NULL;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* newleft;
        node* newRight;
        if(l==-1) newleft=nullptr;
        else newleft=new node(l);
        if(r==-1) newRight=NULL;
        else newRight=new node(r);
        p->left=newleft;
        p->right=newRight;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int level_order(node* root,int c)
{
    if(root==NULL) return 0;
    int l=level_order(root->left,c);
    int r=level_order(root->right,c);
    int x=(max(l,r)+1);
    return x;

}
int main()
{
    node* root=input_tree();
    int x;
    cin>>x;
    cout<<level_order(root,x);
    return 0;
}
