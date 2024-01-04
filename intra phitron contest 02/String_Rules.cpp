#include <bits/stdc++.h>
using namespace std;

string apply_rules(const string& input_string) {
    string final_string;
    int current_number = 0;
    string current_statement;
    char operator_char = 0;

    for (char ch : input_string) {
        if (isdigit(ch) && current_number == 0) {
            current_number = ch -'0';
        }
        else if (isalpha(ch)) {
            current_statement += ch;
        }
        else {
            // Applying rules for the previous statement and operator
            if (current_number != 0 && !current_statement.empty()) {
                for (int i = 0; i < current_number; ++i) {
                    final_string += current_statement;
                }
                if (operator_char != 0) {
                    final_string += operator_char;
                }
            }

            // Resetting the current statement, number, and operator
            current_number = 0;
            current_statement.clear();
            operator_char = ch;
        }
    }

    // Processing the last statement
    if (current_number != 0 && !current_statement.empty()) {
        for (int i = 0; i < current_number; ++i) {
            final_string += current_statement;
        }
    }

    return final_string;
}

int main() {
    string input_string = "5a+2bc-9abc*1d";
    string result = apply_rules(input_string);
    cout << result << endl;
    return 0;
}
