//row-wise/column-wise Binary Search

//rowwise 

// T.C. -> O(n * log m)

#include <iostream>
using namespace std;

void search(int matrix[][4], int n, int m, int key) {
    for (int i=0; i<n; i++) {
        int start=0, end=m-1;
        while(start <= end) {
            int mid = (start + end) / 2;
            if (matrix[i][mid] == key) {
                cout << "key found at : (" << i << "," << mid << ")" << endl;
                return;
            }
            else if (matrix[i][mid] > key) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    cout << "key not found." << endl;
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    search(matrix, 4, 4, 20);
    return 0;
}