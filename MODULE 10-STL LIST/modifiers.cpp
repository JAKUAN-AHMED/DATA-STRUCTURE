#include<bits/stdc++.h>
using namespace std;
int main()
{
    //assign full list
    list<int>mylist={1,10,10,10,20,30,10};
    // list<int>list2;
    // list2=mylist;

    //insert at tail
    // mylist.push_back(10);

    //insert at head
    // mylist.push_front(10);

    //deleting tail
    // mylist.pop_back();
    
    //deleting head
    // mylist.pop_front();

    //inserting at positon single value
   //mylist.insert(next(mylist.begin(),2),100);

   //inserting at position values
   //mylist.insert(next(mylist.begin(),2),{10,20,30,40,50});
    
    //insert at position another list
    // list<int>list={100,200,300};
    // mylist.insert(next(mylist.begin(),2),list.begin(),list.end());

    //insert at positon an array
    // int arr[]={10,20,30,40};
    // mylist.insert(next(mylist.begin(),2),arr,arr+4);
    
    //insert at position of vector
    // vector<int>v={10,20,30};
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
    
    //deleting from positon
    //mylist.erase(next(mylist.begin(),1),next(mylist.begin(),7));

    //replace
    //replace(mylist.begin(),mylist.end(),10,100);

    //find
    auto it=find(mylist.begin(),mylist.end(),10);
    cout<<*it<<endl;
    if(it==mylist.end()) cout<<"not found"<<endl;
    else cout<<"found"<<endl;
    return 0;
}
