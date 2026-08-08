#include <iostream>
using namespace std;

void minSubarraySum (int *arr, int n) {
    int minSum = INT_MAX;
    for(int start = 0; start < n; start++) {
        for (int end= start; end < n; end++) {
            int currsum = 0;
            for(int i=start; i<=end; i++) {
                currsum += arr[i];
            }
            minSum = min(minSum, currsum);
        }
    }
    cout << "Minimum subarray sum : " << minSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    minSubarraySum(arr, n);
    return 0;
}