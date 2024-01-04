#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, p;
    cin >> a >> p;
    int arr[a];
    for (int i = 0; i < a; i++) 
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    while (p--)
    {
        int x;
        cin >> x;
 
        bool found = false;
        
        int l=0,r=a-1;
        while (l<=r)
        {
            int midIndex=(l+r)/2;
            if(arr[midIndex]==x){
                found=true;
                break;
            }    
            if(x>arr[midIndex])
            {
                
                l=midIndex+1;
            }
            else
            {
                r=midIndex-1;
            }
        }
        
        if (found==true) 
        {
            cout << "found" << endl;
        } 
        else
        {
            cout << "not found" << endl;
        }
    }
 
    return 0;
} 