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
void InserAtTail(Node* &head, int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* tmp=head;
    while(tmp->Next!=NULL)
    {
        tmp=tmp->Next;
    }
    tmp->Next=n;
    cout<<endl<<"Inserted at Tail: "<<endl<<endl;

}
void insert_at_pos(Node* head,int pos,int val)
{
    Node* n=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
    }
    n->Next=tmp->Next;
    tmp->Next=n;
    cout<<endl<<"Insert at position: "<<pos<<endl;
}
void display(Node * head)
{
    cout<<endl;
    cout<<"Your Linked List: ";
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<"-->";
        tmp=tmp->Next;
    }
    cout<<"NULL"<<endl<<endl;
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<"Option 1:Insert at Tail:"<<endl;
        cout<<"Option 2:Your Linked List"<<endl;
        cout<<"Option 3:Insert At Any Position:"<<endl;
        cout<<"Option 4:Terminatd:"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter value: ";
            int value;
            cin>>value;
            InserAtTail(head,value);
        }
        else if(op==2)
        {
            display(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter pos:";
            cin>>pos;
            cout<<"Enter val: ";
            cin>>val;
            insert_at_pos(head,pos,val);
        }
        else if(op==4)
        {
            break;
        }
    }
    

    return 0;
}
