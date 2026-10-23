#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "loveleetcode";
    int ans = -1;

    for (int i = 0; i < code.length(); i++) {
        int count = 0;
        for (int j = 0; j < code.length(); j++) {
            if (code[i] == code[j]) {
                count++;
            }
        }
        if (count == 1) {
            ans = i;
            break;
        }
    }

    cout << "Index: " << ans;
    return 0;
}