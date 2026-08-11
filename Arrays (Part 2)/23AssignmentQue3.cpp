#include <iostream>
using namespace std;

void maxSubarrayProd(int *nums, int n) {
    int maxProd = INT_MIN;

    
    for (int start=0; start<n; start++) {
        int currProd = 1;
        for (int end=start; end<n; end++) {
        currProd *= nums[end];
        maxProd = max(maxProd, currProd);
        }
    }
    cout << maxProd << endl;
}

int main() {
    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(int);
    maxSubarrayProd(nums, n);
    return 0;
}