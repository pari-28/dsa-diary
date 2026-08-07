#include <iostream>
using namespace std;

void printArr(int *ptr, int n) {
    for (int i=0; i<n; i++) {
        cout << *(ptr+i) <<"\n";
    }
}

int main() {
    int arr[] = {3, 6, 8, 10, 23};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    return 0;
}