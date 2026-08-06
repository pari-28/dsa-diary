#include <iostream>
using namespace std;

void printArr(int nums[]) {
    cout << "size of nums: " << sizeof(nums) << endl;
    // int n = sizeof(nums) / sizeof(int);
    

    // for(int i=0; i<n; i++){
    //     cout << nums[i] << endl;
    // }
}

int main() {
    int arr[] = {3, 6, 8, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "array size: " << sizeof(arr) << endl;

    printArr(arr);

    return 0;
}