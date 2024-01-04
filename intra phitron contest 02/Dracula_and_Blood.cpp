#include <iostream>
#include <string>
using namespace std;

int bottlesDrankByZaza(string s) {
    int maxBottles = 0;
    int currentBottles = 0;

    for (char c : s) {
        if (c == '1') {
            currentBottles++;
            maxBottles = max(maxBottles, currentBottles);
        } else {
            currentBottles = 0;
        }
    }

    return maxBottles;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        string s;
        cin >> s;

        int result = bottlesDrankByZaza(s);
        cout << result << endl;
    }

    return 0;
}
