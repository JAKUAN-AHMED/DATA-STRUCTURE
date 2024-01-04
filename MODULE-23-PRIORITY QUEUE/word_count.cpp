#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
        if (a.first != b.first)
            return a.first < b.first; // Smaller count comes first
        return false; // Preserve the original order for words with the same count
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string sentence;
        getline(cin, sentence);
        
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        while (ss >> word) {
            mp[word]++;
        }
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> pq;
        
        for (auto it = mp.begin(); it != mp.end(); it++) {
            pq.push({ it->second, it->first });
        }
        
        cout << pq.top().second << " " << pq.top().first << endl;
    }
    
    return 0;
}
