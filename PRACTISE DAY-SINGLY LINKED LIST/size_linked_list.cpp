#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* Next;
        Node(int val)
        {
            this->val=val;
            this->Next=NULL;
        }
};
void insert_At_tail(Node* &head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while (tmp->Next!=NULL)
    {
        tmp=tmp->Next;
    }
    tmp->Next=newNode;
    
}
int getsize(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        tmp=tmp->Next;
        count++;
    }
    return count;
    
}
// void display(Node* head)
// {
//     Node* tmp=head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->Next;
//     }
//     cout<<endl;
//     cout<<getsize(head)<<endl;
// }
int main()
{
    Node* head=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        else insert_At_tail(head,val);
    }
    // display(head);
    cout<<getsize(head)<<endl;
    
    return 0;
}
