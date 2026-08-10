#include <iostream>
using namespace std;

int rotatedArray (int *nums, int n, int target) {
    for(int i=0; i<n; i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(int);

    cout << rotatedArray(nums, n, 9) << endl;

    return 0;
}

// this is for 0(n) time complexity but que specifically asks for 0(log n) time complexity so we should use binary search instead of linear search.