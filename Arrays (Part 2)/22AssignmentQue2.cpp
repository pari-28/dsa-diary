#include <iostream>
using namespace std;

int rotatedSortedArray (int *nums, int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[start] <= nums[mid]) {
            if (target >= nums[start] && target < nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if (target > nums[mid] && target <= nums[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int nums[]={4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(int);

    cout << rotatedSortedArray(nums, n, 0) << endl;
    return 0;
}