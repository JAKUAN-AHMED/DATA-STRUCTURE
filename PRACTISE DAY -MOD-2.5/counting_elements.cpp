#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        auto it=find(arr.begin(),arr.end(),arr[i]+1);
        if (it!=arr.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}