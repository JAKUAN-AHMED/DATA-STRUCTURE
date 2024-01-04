#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myqueue
{
public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete deletenode;
            return;
        }
        head->prev=NULL;
        delete deletenode;

    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        if(sz==0) return true;
        else return false;
    }
};
class mystack
{
public:
    Node* head=NULL;
    Node* tail=NULL;
    int Size=0;

    void push(int val)
    {
        Size++;
        Node* newNode=new Node(val);
        if (head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        Size--;
        Node* deletenode=tail;
        tail=tail->prev;
        if (tail==NULL)
        {
            head=NULL;
        }
        else
        {
            tail->next=NULL;
        }
        delete deletenode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    { 
        return Size;
    }
    bool empty()
    {
        return Size==0;
    }
};
int main()
{
    myqueue q;
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    list<int>l;
    while (!q.isEmpty())
    {
        l.push_back(q.front());
        q.pop();
    }
    mystack st;
    for (int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    list<int>l2;
    while(!st.empty())
    {
        l2.push_back(st.top());
        st.pop();
    }
    int flag=0;
    if(l==l2) flag=1;
    if(flag==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}
