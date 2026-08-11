#include <iostream>
using namespace std;

void maxSubarrayProd(int *nums, int n) {
    int currMax = nums[0];
    int currMin = nums[0];
    int maxProd = nums[0];

    for (int i=1; i<n; i++) {
        int product1 = currMax * nums[i];
        int product2 = currMin * nums[i];

        int newMax = max(nums[i], max(product1, product2));
        int newMin = min(nums[i], min(product1, product2));

        currMax = newMax;
        currMin = newMin;

        maxProd = max(maxProd, currMax);
    }
    cout << maxProd << endl;
}

int main() {
    int nums[] = {-2, 3, -4, -5};
    int n = sizeof(nums) / sizeof(int);

    maxSubarrayProd(nums, n);
    return 0;
}