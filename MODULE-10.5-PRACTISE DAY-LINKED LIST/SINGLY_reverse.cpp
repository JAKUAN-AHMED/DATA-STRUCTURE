#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* Next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->Next=NULL;
    }

};
void print(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl;
    
}
void reverse(Node* &head,Node* cur)
{
    if(cur->Next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->Next);
    cur->Next->Next=cur;
    cur->Next=NULL;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=b;
    head->Next=a;
    a->Next=b;
    reverse(head,head);
    print(head);
    return 0;
}