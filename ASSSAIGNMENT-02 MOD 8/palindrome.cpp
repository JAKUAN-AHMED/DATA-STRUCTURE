#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* Next;
        Node(int val)
        {
            this->val=val;
            this->Next=NULL;
        }
};
void insertTail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=newNode;
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->Next;
    }
    
    return count;
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
        
        insertTail(head, tail, val);
    }
    while (true)
    {
        int val1;
        cin >> val1;
        
        if(val1 == -1)
            break;
        
        insertTail(head1, tail1, val1);
    }
    vector<int>v;
    Node* tmp=head;
    for(int i=0;i<size(head);i++)
    {
        v.push_back(tmp->val);
        tmp=tmp->Next;
    }
    vector<int>v1;
    Node* tmp1=head1;
    for(int i=0;i<size(head1);i++)
    {
        v1.push_back(tmp1->val);
        tmp1=tmp1->Next;
    }
    int flag=1;
    for (int i = 0; i < size(head); i++)
    {
        if(v[i]!=v1[i])
        {
            flag=0;
        }
    }
    if(size(head)!=size(head1)) cout<<"NO"<<endl;
    else if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}    