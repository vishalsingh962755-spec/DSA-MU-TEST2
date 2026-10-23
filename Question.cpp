 #include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 0, 1};
    int n = 3;
    int total = 0;
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        total = total + i;
    }
    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }

    cout << "Missing seat: " << total - sum;
    return 0;
}