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

int getsize(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
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
    
    if((getsize(head))%2==0)
    {
        cout << "Middle element: " << slow->val <<" "<<slow->Next->val<< endl;
    }
    else cout << "Middle element: " << slow->val << endl;
}

int main() {
    Node* head = NULL;
    
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        else insert_At_tail(head, val);
    }
    // cout<<getsize(head)<<endl;
    midisplay(head);
    
    return 0;
}
