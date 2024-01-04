#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* Next;
    Node(int val) {
        this->val = val;
        this->Next = NULL;
    }
};
void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode=new Node(val);
    if (head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=newNode;
}
void reverseList(Node* head) 
{
    if (head==NULL) return;

    reverseList(head->Next);
    cout <<head->val<<" ";
}
void printlist(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    while (true) {
        int val;
        cin>>val;
        if (val == -1) break;
        insertAtTail(head,tail,val);
    }
    reverseList(head);
    cout<<endl;
    printlist(head);

    return 0;
}
