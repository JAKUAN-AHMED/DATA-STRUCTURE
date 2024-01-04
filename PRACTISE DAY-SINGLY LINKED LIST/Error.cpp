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

void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtIndex(Node* &head, int index, int val) {
    if (index < 0) {
        cout << "Invalid" << endl;
        return;
    }
    Node* newNode = new Node(val);
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Invalid" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int getsize(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
       tmp=tmp->next;
       count++;
    }
    return count;
    
}
void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int val;
    while (cin >> val && val != -1) {
        insertAtTail(head, val);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int index, val;
        cin >> index >> val;
        insertAtIndex(head, index, val);
        if (index <= getsize(head)) {
            displayLinkedList(head);
        }
    }
    return 0;
}
