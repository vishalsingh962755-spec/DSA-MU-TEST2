#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int profit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (prices[j] - prices[i] > profit) {
                profit = prices[j] - prices[i];
            }
        }
    }

    cout << "Max profit: " << profit;
    return 0;
}