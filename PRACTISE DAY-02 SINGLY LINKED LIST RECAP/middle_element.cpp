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
int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->Next;
        count++;
    }
    
    return count;
}
void midisplay(Node* head) {
    Node* slow = head;
    Node* fast = head;
    
    while (fast != NULL && fast->Next != NULL) {
        slow = slow->Next; 
        fast = fast->Next->Next;
    }
    
    if((size(head))%2==0)
    {
        cout << "Middle element: " << slow->val <<" "<<slow->Next->val<< endl;
    }
    else cout << "Middle element: " << slow->val << endl;
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
    midisplay(head);
    
    return 0;
}
