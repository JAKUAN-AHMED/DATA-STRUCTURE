#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
void sorting(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void dublicate(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* tmp=head;
     while (tmp!=NULL && tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            Node* dl=tmp->next;
            tmp->next=tmp->next->next;
            delete dl;
        }
        else tmp=tmp->next;
    }
    
}
void print(Node* head)
{

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        else {
            insertTail(head, tail, val);
        }
    }
    sorting(head);
    dublicate(head); 
    print(head); 
    return 0;
}
