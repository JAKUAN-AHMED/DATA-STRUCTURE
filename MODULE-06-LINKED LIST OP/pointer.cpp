#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    //cout<<&p<<endl;
    cout<<&p<<endl;
}    
int main()
{
    int value=10; 
    int *ptr=&value;
    fun(ptr);
    //cout<<&(*ptr)<<" "<<&value;
    //cout<<&value<<endl<<&ptr;
    cout<<&value<<endl<<&ptr;
    // int value=10;
    // int *ptr=&value;
    // int **ptr1=&ptr;
    // cout<<value<<endl<<ptr<<endl<<ptr1;
    return 0;
}
