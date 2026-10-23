#include <iostream>
using namespace std;

int main() {
    int roll[] = {1, 2, 3, 1};
    int n = 4;
    bool repeat = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (roll[i] == roll[j]) {
                repeat = true;
            }
        }
    }

    if (repeat == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}