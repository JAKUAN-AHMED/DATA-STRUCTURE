//here are two ways to solve one is 0 indexing and other one is 1 indexing
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p;
    cin>>n>>p;
    vector<long long int>arr(n);
    for(int i=1;i<=n;i++)//o(n)
    {
        cin>>arr[i];
    }
    long long int prefix[n+1];
    prefix[1]=arr[1];
    for(int i=2;i<=n;i++)//o(n)
    {
        prefix[i]=arr[i]+prefix[i-1];
    }
    while(p--)//0(p)
    {
        long long int x,y;
        cin>>x>>y;
        // x--;
        // y--;
        long long int sum;
        if(x==1) sum=prefix[y];
        else sum=prefix[y]-prefix[x-1];
        cout<<sum<<endl;
    }
    //o(n)+o(n)+o(p);
    return 0;
}
