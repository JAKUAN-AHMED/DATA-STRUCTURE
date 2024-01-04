#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
}

int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    
    return count;
}

void Linked_list(Node* head)
{
    Node* tmp = head;
    
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    cout << "Enter elements for the first linked list (-1 to stop):" << endl;
    while (true)
    {
        int val;
        cin >> val;
        
        if(val == -1)
            break;
        
        insert_at_tail(head, tail, val);
    }
    while (true)
    {
        int val1;
        cin >> val1;
        
        if(val1 == -1)
            break;
        
        insert_at_tail(head1, tail1, val1);
    }
    
    cout << "First linked list:" << endl;
    Linked_list(head);
    
    cout << endl;
    
    cout << "Second linked list:" << endl;
    Linked_list(head1);
    cout<<endl<<endl;
    int size1 = size(head);
    int size2 = size(head1);
    
    cout << "Size of the first linked list: " << size1 << endl;
    cout << "Size of the second linked list: " << size2 << endl;
    if(size1==size2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
    return 0;
}
