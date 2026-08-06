#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
    for (int i=0; i<n; i++) {
        if (arr[i] == key) {
            cout << "key found at index: ";
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 10, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, n, 2) << endl;

    return 0;
}