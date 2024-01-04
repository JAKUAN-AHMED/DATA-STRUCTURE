#include<bits/stdc++.h>

using namespace std;

const int alpha = 26;

int main() {
    string s;
    cin >> s;

    vector<int> freq(alpha, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    for (int i = 0; i < alpha; i++) {
        if (freq[i] > 0) {
            cout <<char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
