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
        this->prev=NULL;
    }

};
void InsertTail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    newNode->prev=tail;
    tail=tail->Next;
}
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
void ispalindrome(Node* head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    bool flag=false;
    while(i!=j && i->Next!=j)
    {
        if(i->val!=j->val)
        {
            flag=true;
            break;
        }
        i=i->Next;
        j=j->prev;
    }
    if(i->val!=j->val)
    {
        flag=true;
    }
    if(flag==true) cout<<"not palindrome"<<endl;
    else cout<<"palindrome"<<endl;

}
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->Next;
    }
    return count;
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
        else InsertTail(head,tail,val);
    }
    ispalindrome(head,tail);
    print(head);
    return 0;
}    