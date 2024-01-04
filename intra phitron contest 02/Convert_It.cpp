#include <iostream>
#include <queue>
using namespace std;

int main() {
    int value;
    priority_queue<int> maxHeap;

    // Input the initial binary tree
    while (cin >> value && value != -1) {
        maxHeap.push(value);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int newValue;
            cin >> newValue;
            maxHeap.push(newValue);
        } else if (type == 2) {
            if (!maxHeap.empty()) {
                cout << maxHeap.top() << endl;
                maxHeap.pop();
            } else {
                cout << "No elements in the tree!" << endl;
            }
        }
    }

    return 0;
}
