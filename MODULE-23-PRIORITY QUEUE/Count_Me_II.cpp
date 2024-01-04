#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> most_frequent_number(int n, vector<int>& v) {
    // Sort the input vector
    sort(v.begin(), v.end());

    int max_count = 0;
    int max_number = v[0];
    int curr_count = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            curr_count++;
        } else {
            curr_count = 1;
        }

        if (curr_count > max_count) {
            max_count = curr_count;
            max_number = v[i];
        }
    }

    return make_pair(max_number, max_count);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        pair<int, int> result = most_frequent_number(n, v);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
