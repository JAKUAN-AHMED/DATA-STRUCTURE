#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    vector<int> arr(a);
    for (int i = 0; i <a; i++) {
        cin >> arr[i];
    }
    
    while (b--) {
        int s, p;
        cin >> s >> p;
        
        int sum = 0;
        for (int i = s - 1; i <p; i++) {
            sum += arr[i];
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}
