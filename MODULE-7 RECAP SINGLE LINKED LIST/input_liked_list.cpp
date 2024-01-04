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
void insert_at_tail(Node * &head,Node * &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=newNode;
    
}
void recursive(Node* head)
{
    if(head==NULL) return;
    recursive(head->Next);
    cout<<head->val<<" ";
}
int get_size(Node* head) {
    Node* tmp = head;
    int count = 0;
    
    while (tmp != NULL)
    {
        tmp = tmp->Next;
        count++;
    }
    
    return count;
}
void display(Node* head) {
    cout << "Your Linked List: ";
    Node* tmp = head;
    
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    
    cout << endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else insert_at_tail(head,tail,val);
    }
    for (Node* i = head; i->Next!=NULL; i=i->Next)
    {
        for (Node* j = i->Next; j!=NULL;j=j->Next )
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }
    display(head);
    

    
    return 0;
}
