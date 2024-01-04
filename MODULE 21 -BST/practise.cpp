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
node* convert(int arr[],int l,int r)
{
    if(l>r) return nullptr;
    int mid=(l+r)/2;
    node* root=new node(arr[mid]);
    node* leftRoot=convert(arr,l,mid-1);
    node* rightRoot=convert(arr,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
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
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    node* root=convert(arr,0,n-1);
    level_order(root);
    return 0;
}
