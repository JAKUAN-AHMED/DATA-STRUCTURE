//one roule for binary tree its left child < right child
#include<bits/stdc++.h>
using namespace std;
class b_node
{
public:
    int val;
    b_node* left;
    b_node* right;
    b_node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};    
int main()
{
    b_node* root=new b_node(10);
    b_node* a=new b_node(20);
    b_node* b=new b_node(30);
    b_node* c=new b_node(40);
    b_node* d=new b_node(50);
    b_node* e=new b_node(60);
    b_node* f=new b_node(70);
    b_node* g=new b_node(80);
    b_node* h=new b_node(90);
    b_node* i=new b_node(100);

    // connection
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    b->right=d;
    d->left=f;
    d->right=g;
    h->right=i;

    return 0;
}
