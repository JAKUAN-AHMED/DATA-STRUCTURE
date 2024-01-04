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
int main()
{
   //Node head(10);
   Node* head=new Node(10);
   Node* a=new Node(20);
   head->Next=a;
   cout<<head->val<<endl<<a->val<<endl<<head->Next->val<<endl;
   cout<<(*(*head).Next).val<<endl;
    return 0;
}
