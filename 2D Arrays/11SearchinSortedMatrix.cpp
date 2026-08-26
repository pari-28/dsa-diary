//rowwise/columnwise Binary Search

// columnwise

#include <iostream>
using namespace std;

bool search (int matrix[][4], int n, int m, int key) {
    for (int j=0; j<m; j++) {
        int start = 0, end = n-1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (matrix[mid][j] == key) {
                cout << "key found at : (" << mid << "," << j << ")" << endl;
                return true; 
            } else if (matrix[mid][j] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    cout << "key not found." << endl;
    return false;
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    search(matrix, 4, 4, 35);
    return 0;
}