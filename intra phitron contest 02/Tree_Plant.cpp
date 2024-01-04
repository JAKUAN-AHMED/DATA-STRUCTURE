#include <iostream>
#include <vector>
using namespace std;

long long sum_of_plant_trees_at_year(int year, vector<long long>& memo) {
    if (year == 0) {
        return 0;
    }
    if (year == 1) {
        return 1;
    }

    if (memo[year] != -1) {
        return memo[year];
    }

    // Calculate the sum of left and right subtrees
    long long left_subtree_sum = sum_of_plant_trees_at_year(year - 1, memo);
    long long right_subtree_sum = sum_of_plant_trees_at_year(year - 2, memo);

    // Calculate the sum of all values of plant trees at the current year
    long long current_year_sum = left_subtree_sum + right_subtree_sum;

    memo[year] = current_year_sum;
    return current_year_sum;
}

int main() {
    int Y;
    cin >> Y;

    vector<long long> memo(Y + 1, -1);
    
    // Calculate the sum of all values of plant trees at the Yth year
    long long result = sum_of_plant_trees_at_year(Y, memo);
    cout << result << endl;

    return 0;
}
