#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* Next;
    Node* prev;
    Node(int val) 
    {
        this->val = val;
        this->Next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int Size = 0;  // Renamed from "size"

    void push(int val) 
    {
        Size++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->Next = newNode;
        tail = tail->Next;
    }

    void pop() 
    {
        Size--;
        Node* deletenode = tail;
        tail = tail->prev; 
        if (tail == NULL)
         {
            head = NULL;
        }
         else 
        {
            tail->Next = NULL;
        }
        delete deletenode;
    }
    int top() 
    {
        return tail->val;
    }

    int size() {  // Renamed from "size"
        return Size;
    }

    bool empty() {
        return Size == 0;
    }
};
int main() 
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
