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

bool duplicate2(int *nums2, int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (nums2[i] == nums2[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int nums2[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(nums) / sizeof(int);

    cout << duplicate(nums, n) << endl;
    cout << duplicate(nums2, n) << endl;
    return 0;
}