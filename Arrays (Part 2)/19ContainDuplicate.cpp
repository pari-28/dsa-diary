#include <iostream>
using namespace std;

bool duplicate(int *nums, int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 1, 3, 4};
    int n = sizeof(nums) / sizeof(int);

    cout << duplicate(nums, n) << endl;
    return 0;
}