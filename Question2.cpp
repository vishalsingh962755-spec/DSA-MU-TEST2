#include <iostream>
using namespace std;

int main() {
    int scores[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] + scores[j] == target) {
                cout << "Indices: " << i << " " << j;
            }
        }
    }
    return 0;
}