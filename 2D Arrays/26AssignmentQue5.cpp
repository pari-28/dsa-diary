#include <iostream>
using namespace std;

//for n*n matrix

void rotateMatrix (int matrix[][4], int n) {

    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            swap(matrix[j][i], matrix[i][j]);
        }
    }

    for (int i=0; i<n; i++) {
        int start= 0;
        int end = n-1;

        while (start < end) {
            swap (matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    //print
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4] = {{5, 1, 9, 11},
                {2, 4, 8, 10},
                {13, 3, 6, 7},
                {15, 14, 12, 16}};
    rotateMatrix(matrix, 4);
    return 0;
}