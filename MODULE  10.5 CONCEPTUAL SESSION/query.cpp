#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    string address;
    Node* next;
    Node* prev;
    Node(string address) {
        this->address=address;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertTail(Node* &head,Node* &tail,string address) {
    Node* newNode=new Node(address);
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        string address;
        cin>>address;
        if(address=="end") break;
        else insertTail(head,tail,address);
    }
    int query;
    cin>>query;
    cin.ignore();
    Node* current=head;
    Node* tmp=head;
    for (int i=0;i<query;i++)
    {
        string com;
        getline(cin,com);
        stringstream ss(com);
        string word;
        ss>>word;
        if(word=="visit")
        {
            ss>>word;
            tmp=head;
            while(tmp!=NULL)
            {
                if(tmp->address==word)
                {
                    cout<<tmp->address<<endl;
                    break;
                }
                else tmp=tmp->next;
            }
            if(tmp==NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                current=tmp;
            }
        }
        else if(word=="next")
        {
            if(current->next!=NULL)
            {
                cout<<current->next->address<<endl;
                current=current->next;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(word=="prev")
        {
            if(current->prev!=NULL)
            {
                cout<<current->prev->address<<endl;
                current=current->prev;
            }
            else cout<<"Not Available"<<endl;
        }
    }
    return 0;
}