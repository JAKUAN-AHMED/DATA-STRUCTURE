#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>  t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            freqMap[num]++;
        }

        int moves = 0;
        for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
            if (it->second > 1) {
                moves += (it->second - 1);
            }
        }

        cout << moves << endl;
    }

    return 0;
}
