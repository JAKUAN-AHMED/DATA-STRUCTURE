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

void insert_at_tail(Node * &head,Node * &tail,int val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void insert_head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_any(Node* &head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* tmp = head;
    
    for (int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
        if (tmp == NULL) {
            cout << "Invalid index" << endl;
            return;
        }
    }
    
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int get_size(Node* head) {
    Node* tmp = head;
    int count = 0;
    
    while (tmp != NULL) {
        tmp = tmp->next;
        count++;
    }
    
    return count;
}
void display(Node* head) {
    cout << "Your Linked List: ";
    Node* tmp = head;
    
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
    cout << endl;
}
int main() {
    Node* head =new Node(10);
    Node* a =new Node(20);
    Node* b =new Node(30);
    Node* c=new Node(40);
    Node* tail=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    
    int pos, val;
    cin >> pos >> val;
    
    if (pos > get_size(head)) {
        cout << "Invalid index" << endl;
    }
    else if (pos == 0) {
        insert_head(head, val);
    }
    else if(pos==get_size(head))
    {
        insert_at_tail(head,tail,val);
    }
    else {
        insert_any(head, pos, val);

    }
    
    display(head);
    
    return 0;
}
