#include<bits/stdc++.h>
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

void insert_At_tail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->Next != NULL) {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}

bool isAscending(Node* head) {
    Node* tmp = head;
    while (tmp->Next != NULL) {
        if (tmp->val > tmp->Next->val)
            return false;
        tmp = tmp->Next;
    }
    return true;
}

void display(Node* head) {
    if (isAscending(head)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    Node* head = NULL;
    while (true) {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_At_tail(head, val);
    }
    display(head);

    return 0;
}
