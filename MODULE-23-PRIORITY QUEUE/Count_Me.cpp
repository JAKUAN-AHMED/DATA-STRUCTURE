#include<bits/stdc++.h>
using namespace std;
pair<string,int>freq(string s)
{
    stringstream ss(s);
    string word;
    map<string,int>wordCnt;
    int max_count=0;
    string max_word=" ";
    while (ss>>word)
    {
        wordCnt[word]++;
        if (wordCnt[word]>max_count)
        {
            max_count=wordCnt[word];
            max_word=word;
        }
    }
    return make_pair(max_word,max_count);
}
int main()
{
    int test;
    cin>>test;
    cin.ignore();
    for(int t=0;t<test;t++)
    {
        string S;
        getline(cin,S);
        pair<string,int>result=freq(S);
        cout<<result.first<<" "<<result.second<<endl;
    }
    return 0;
}
