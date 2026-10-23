#include <iostream>
using namespace std;

int main() {
    int scores[] = {8, 3, 5, 8, 6};
    int n = 5;
    int max = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    int second = -1;
    for (int i = 0; i < n; i++) {
        if (scores[i] != max && scores[i] > second) {
            second = scores[i];
        }
    }

    cout << "Second highest: " << second;
    return 0;
}