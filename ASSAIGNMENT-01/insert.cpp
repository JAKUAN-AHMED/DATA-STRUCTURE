#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2 && j==n/2)
            {
                cout<<"x";
            }
            else if(i==j) cout<<"\\";
            else if(i+j==n-1) cout<<"/";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
