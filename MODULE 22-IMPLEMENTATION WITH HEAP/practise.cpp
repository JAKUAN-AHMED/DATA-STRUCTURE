#include<bits/stdc++.h>
using namespace std;
void insert_max_heap(vector<int>&v,int x)
{
    v.push_back(x);
    int cur_idx=v.size()-1;
    while (cur_idx!=0)
    {
        int parent_idx=(cur_idx-1)/2;
        if(v[cur_idx]<v[parent_idx])
        {
            swap(v[parent_idx],v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx=parent_idx;
    }
}
void deleteFromMx(vector<int>&v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;
    while (true)
    {
        
        int left_child=(cur*2)+1;
        int right_child=(cur*2)+2;
        int last_idx=v.size()-1;
        if(left_child<=last_idx && right_child<=last_idx)
        {
            //duitai ache
            if(v[left_child]>=v[right_child] && v[left_child]>v[cur])
            {
                swap(v[left_child],v[cur]);
                cur=left_child;
            }
            else if(v[right_child] >= v[left_child] && v[right_child]>v[cur])
            {
                swap(v[right_child],v[cur]);
                cur=right_child;
            }
            else{
                break;
            }
        }
        else if(left_child<=last_idx)
        {
            //left ache
            if(v[left_child]>=v[cur])
            {
                swap(v[left_child],v[cur]);
                cur=left_child;
            }
            else{
                break;
            }
        }
        else if(right_child<=last_idx)
        {
            //right ache
            if(v[right_child]>=v[cur])
            {
                swap(v[right_child],v[cur]);
                cur=right_child;
            }
            else{
                break;
            }
        }
        else{
            break;
        }
    }
    
    
}
void print(vector<int>v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
}
int main()
{
    vector<int>v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_max_heap(v,x);
    }
    deleteFromMx(v);
    print(v);
    cout<<endl;
    deleteFromMx(v);
    print(v);
    return 0;
}
