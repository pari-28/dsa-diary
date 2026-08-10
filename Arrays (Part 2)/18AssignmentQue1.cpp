#include <iostream>
using namespace std;

void duplicate(int *nums, int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            cout << "(i=" << i << "," << "j=" << j << ") ";
            if (nums[i] == nums[j]) {
                cout << true << endl;
            }
            else {
                cout << false << endl;
            }
        }
    }
    cout << endl;
}

int main() {
    int nums[] = {1, 1, 3, 4};
    int n = sizeof(nums) / sizeof(int);
    duplicate(nums, n);
    return 0;
}