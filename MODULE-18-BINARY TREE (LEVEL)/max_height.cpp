#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* left;
        node* right;
        //constructor
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
        //ber kora
        node* p=q.front();
        q.pop();

        //jabotio kaj
        int l,r;
        cin>>l>>r;
        node* newLeft;
        node* newRight;
        if(l==-1) newLeft=NULL;
        else newLeft=new node(l);
        if(r==-1) newRight=NULL;
        else newRight=new node(r);
        p->left=newLeft;
        p->right=newRight;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;

}
int max_height(node* root)
{
    if(root==nullptr) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    node* root=input_tree();
    cout<<max_height(root);
    return 0;
}