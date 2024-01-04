#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode=new Node(val);
    
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next=newNode;
    tail=newNode;
}

int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    
    return count;
}
void Linked_list(Node *head)
{
    Node *tmp = head;

    for (int i=1;i<=size(head);i++)
    {
        
        if (i==size(head)/2 && size(head)%2==0)
        {
            cout<<tmp->val<<" "<<tmp->next->val;
            break;
        }
        else if(i==size(head)/2){
            cout<<tmp->next->val<<" "<<endl;
            break;
        }
        tmp=tmp->next;
    }
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
        else insert_at_tail(head,tail,val);
    }
    for (Node*  i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)//20 30 10 40 60 50 -1
            {
                swap(i->val,j->val);
            }
        }
    }
    Linked_list(head);
    return 0;
}
