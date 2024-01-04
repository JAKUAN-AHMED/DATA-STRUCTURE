#include <bits/stdc++.h>
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
void countValues(Node* head) {
    int Out_of_limits = 101;
    int counts[Out_of_limits] = {0};

    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val >= 0 && tmp->val <Out_of_limits) {
            counts[tmp->val]++;
        }
        tmp = tmp->Next;
    }
    int flag=1;
    for (int i = 0; i <Out_of_limits; i++)
    {
        if (counts[i] > 1) {
            //cout << i << "-" << counts[i] << endl;
            flag=0;
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
// void display(Node* head) {
//     Node* tmp = head;
//     while (tmp != NULL) {
//         cout << tmp->val << " ";
//         tmp = tmp->Next;
//     }
//     cout << endl;
// }
int main() {
    Node* head = NULL;
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        else
        {
            insert_At_tail(head, val);
        }
    }
    // display(head);
    countValues(head);

    return 0;
}
