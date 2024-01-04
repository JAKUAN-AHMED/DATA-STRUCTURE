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
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->Next = newNode;
    tail = newNode;
}

void reverseList(Node* head) {
    if (head == NULL) return;
    reverseList(head->Next);
    cout << head->val <<" ";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    cout << "Enter values (-1 to exit):" << endl;
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insertAtTail(head, tail, val);
    }
    
    cout << "Reversed Linked List:" << endl;
    reverseList(head);

    return 0;
}
