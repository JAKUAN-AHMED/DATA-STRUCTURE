#include<bits/stdc++.h>
using namespace std;
class minStack {
private:
    stack<int> st;
    stack<int> minSt;
    int minValue;

public:
    minStack() {
        minValue = INT_MAX;
    }

    void push(int num) {
        st.push(num);
        if (num <= minValue) {
            minSt.push(num);
            minValue = num;
        }
    }

    int pop() {
        if (st.empty()) {
            return -1; // or any other appropriate error code/exception handling
        }

        int topElement = st.top();
        st.pop();

        if (topElement == minSt.top()) {
            minSt.pop();
            minValue = minSt.empty() ? INT_MAX : minSt.top();
        }

        return topElement;
    }

    int top() {
        if (st.empty()) {
            return -1; // or any other appropriate error code/exception handling
        }

        return st.top();
    }

    int getMin() {
        if (minSt.empty()) {
            return -1; // or any other appropriate error code/exception handling
        }

        return minSt.top();
    }
};

int main() {
    minStack stack;
    stack.push(5);
    stack.push(2);
    stack.push(7);
    stack.push(1);
    stack.push(3);

    cout << stack.getMin() << endl;

    return 0;
}