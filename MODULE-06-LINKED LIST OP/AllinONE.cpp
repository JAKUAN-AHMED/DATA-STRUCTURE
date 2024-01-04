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
void insert_at_tail(Node* &head,int val)
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
    cout<<"Inserted at tail"<<endl;
    
}
void Insert_at_any_positoin(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
        if(tmp==NULL)
        {
            cout<<endl<<endl<<"Invali Index "<<endl<<endl;
            return;
        }
    }
    newNode->Next=tmp->Next;
    tmp->Next=newNode;
}
void insert_at_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->Next=head;
    head=newNode;
    cout<<"Inserted at Head "<<endl;
}
void delete_from_any_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
        if(tmp==NULL)
        {
            cout<<endl<<endl<<"Invali Index "<<endl<<endl;
            return;
        }
    }
    if(tmp->Next==NULL) cout<<endl<<endl<<"Invalid Index "<<endl<<endl;
    Node* DeleteNode=tmp->Next;
    tmp->Next=tmp->Next->Next;
    delete DeleteNode;

}
void delete_from_head(Node* &head)
{
    if(head==NULL) cout<<endl<<endl<<"Head is not available here"<<endl<<endl;
    Node* deletehead=head;
    head=head->Next;
    delete deletehead;
    cout<<"deleted head"<<endl;

}
void display(Node* head)
{
    cout<<endl<<endl<<"Your Linked List : "<<endl<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    while (true)
    {
        cout<<"Option 1: Inseert at Tail"<<endl;//Done
        cout<<"Option 2: Insert at head "<<endl;//Done
        cout<<"Option 3: Insert at any position "<<endl;//done
        cout<<"Option 4: Deletenode from any Postion "<<endl;//done
        cout<<"Option 5: Delete Node from head "<<endl;
        cout<<"Option 6: Your Linked List"<<endl;//done
        cout<<"Option 7: Terminated "<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter value: "<<endl;
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            cout<<"Enter value: "<<endl;
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==3)
        {
            cout<<"Enter positon: "<<endl;
            int pos;
            cin>>pos;
            cout<<"Enter value: "<<endl;
            if(pos==0)
            {
                int val;
                cin>>val;
                insert_at_head(head,val);
            }
            else
            {
                int val;
                cin>>val;
                Insert_at_any_positoin(head,pos,val);
            }
        }    
        else if(op==4)
        {
            cout<<"Enter postion: "<<endl;
            int pos;
            cin>>pos;
            if(pos==0)
            {
                delete_from_head(head);
            }
            else delete_from_any_position(head,pos);
        }
        else if(op==5)
        {
        
            delete_from_head(head);
        }
        else if(op==6)
        {
            display(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    
    return 0;
}
