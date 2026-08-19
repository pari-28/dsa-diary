#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void countSort(int *arr, int n) {
    int freq[100000];
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i=0; i<n; i++) {
        freq[arr[i]]++;
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }

    for (int i=maxVal, j=0; i>=minVal; i--) {
        while (freq[i] > 0) {
        arr[j++] = i;
        freq[i]--;
        }
    }

    print(arr, n);
}

int main() {
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    countSort(arr, 10);
    return 0;
}