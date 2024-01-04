#include<bits/stdc++.h>
using namespace std;
int main()
{
    //making list
    //syntax->list<type>name-List
    //list<int>myList;

    //declare size
    //list<int>myList(10);

    //size with single value
    //list<int>myList(10,100);

    //printing doubly linked list with iterator
    // for (auto it =myList.begin(); it != myList.end(); it++)
    // {
    //    cout<<*it<<endl;
    // }

    //range based for loop
    // for(int val:myList)
    // {
    //     cout<<val<<endl;
    // }
    

    //copy from another list
    //list<int>myList={10,20,30,40,50};

    //copy from a vector
    //vector<int>v={10,20,30,40,50};

    //copy from an array
    int arr[]={10,20,30,40,50};
    list<int>list2(arr,arr+5);
    for(int val:list2)
    {
        cout<<val<<endl;
    }
    cout<<list2.size()<<endl;
    return 0;
}
