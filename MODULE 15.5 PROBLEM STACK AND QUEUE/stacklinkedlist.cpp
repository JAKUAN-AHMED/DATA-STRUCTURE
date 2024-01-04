#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myqueue {
public:
    Node* head;
    Node* tail;
    int size;
    myqueue()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    void push(int val) {
        size++;
        Node* newNode=new Node(val);
        if(tail==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    
    }
    void pop()
    {
        if (head==NULL)
        {
            return;
        }
        size--;
        Node* tmp=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete tmp;
    }
    int front()
    {

        return head->val;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
};
class mystack 
{
public:
    Node* head;
    int size;
    mystack() 
    {
        head=NULL;
        size =0;
    }
    void push(int val)
    {
        size++;
        Node* newNode=new Node(val);
        if (head==NULL)
        {
            head=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }
    void pop()
    {
        if (head==NULL)
        {
            return;
        }
        size--;
        Node* tmp=head;
        head=head->next;
        delete tmp;
    }
    int top()
    {
        if (head==NULL){
            return -1;
        }
        return head->val;
    }
    bool empty()
    {
        return size==0;
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
    list<int>l2;
    mystack st;
    for (int i=0; i<m;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
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
