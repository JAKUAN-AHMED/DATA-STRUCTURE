#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, p;
    cin >> a >> p;

    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cin>>arr[i];
    }

    while (p--) {
        int x;
       cin >> x;

        bool found = false;
        for (int i = 0; i < a; i++) {
            if (arr[i] == x) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
