#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type-01
    //time complexity O(1)
    // vector<int>v={1,2,3,4,5};
    // vector<int>v2={1,2,3,4,5};
    // v2=v;
    // for(int s:v2)
    // {
    //     cout<<s<<" ";
    // }

    //time complexity O(N)-if size isnt equal
    // vector<int>v={1,2,3,4,5};
    // vector<int>v2={1,2,3};//v2;
    // v2=v;
    // for(int s:v2)
    // {
    //     cout<<s<<" ";
    // }

    //type-02
    //push back & pop back
    // vector<int>v={1,2,3,4,5};
    // v.push_back(3);//insert element in last index
    // v.pop_back();//delete element from last index
    // for(int s:v)
    // {
    //     cout<<s<<" ";
    // }

    //type-3
    //inserting element in specific positon
    //vector<int>v={10,20,30,40,50};
    //v.insert(v.begin()+1,3);//single value
    //vector<int>v2={1,2,3,4,5};
    //v.insert(v.begin()+1,v2.begin(),v2.end()-1);//insertin multiple value
    //for(int s:v)
    //{
    //    cout<<s<<" ";
    //}

    //type-04
    //erasing
    // vector<int>s={1,2,3,4,5};
    // s.erase(s.begin(),s.end()-3);
    // for(int f:s)
    // {
    //     cout<<f<<" ";
    // }

    //type-0
    //replace 
    // vector<int>v={10,20,30,40,50,10,23,10,10};
    // replace(v.begin()+1,v.end()-3,10,50);
    // for(int s:v)
    // {
    //     cout<<s<<" ";
    // }

    //type-06
    //finding 
    // vector<int>v={10,20,30,40,50};
    // // vector<int>::iterator it;
    // auto it=find(v.begin(),v.end(),100);
    // if(it==v.end()) cout<<"Not found";
    // else cout<<"Found";
    return 0;
}
