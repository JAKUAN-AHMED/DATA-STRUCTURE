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
void insertTail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=tail->Next;
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
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
       int val;
       cin>>val;
       if(val==-1) break;
       else insertTail(head,tail,val);
    }
    Node* newHead=NULL;
    Node* newTail=NULL;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        insertTail(newHead,newTail,tmp->val);
        tmp=tmp->Next;
    }
    reverse(newHead,newHead);
    tmp=head;
    Node* tmp2=newHead;
    bool flag=false;
    while(tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            flag=true;
            break;
        }
        tmp=tmp->Next;
        tmp2=tmp2->Next;
    }
    if(flag==true) cout<<"NO";
    else cout<<"YES";
    return 0;
}
