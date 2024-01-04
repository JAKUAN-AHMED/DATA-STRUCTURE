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
void checkPalindrome(Node* head,Node* head1,Node* tail,Node* tail2)
{
    Node* tmp1=head;
    Node* tmp2=head1;
    bool flag=false;
    if(size(tmp1)==size(tmp2))
    {
        for(int i=0;i<size(tmp1);i++)
        {
            if(tmp1->val!=tmp2->val)
            {
                flag=true;
                break;
            }
            tmp1=tmp1->Next;
            tmp2=tmp2->Next;
        }
        if(tail->val!=tail2->val)
        {
            flag=true;
        }
        
    }
    if(size(tmp1)!=size(tmp2)) cout<<"not same"<<endl;
    else if(flag==true) cout<<"not same"<<endl;
    else cout<<"same"<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        else InsertTail(head,tail,val);
    }
    Node* head1=NULL;
    Node* tail1=NULL;
    int value;
    while (true)
    {
        cin>>value;
        if(value==-1) break;
        else InsertTail(head1,tail1,value);
    }
    print(head);
    print(head1);
    checkPalindrome(head,head1,tail,tail1);
    
    return 0;
}