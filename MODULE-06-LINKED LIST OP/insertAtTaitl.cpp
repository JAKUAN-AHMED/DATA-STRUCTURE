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

}
void display(Node * head)
{
    cout<<"Your Linked List: ";
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<"-->";
        tmp=tmp->Next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<"Option 1:Insert at Tail:"<<endl;
        cout<<"Option 2:Your Linked List"<<endl;
        cout<<"Option 3:Terminate:"<<endl;
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
            break;
        }
    }
    

    return 0;
}
