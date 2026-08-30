#include <iostream>
using namespace std;

//for n*n matrix

void rotateMatrix (int matrix[][3], int n) {

    
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
    int matrix[3][3] = {{1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}};
    rotateMatrix(matrix, 3);
    return 0;
}