#include <iostream>
using namespace std;

void rotateMatrix (int matrix2[][4], int n, int m) {
    int rotate[20][20];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            rotate[j][n-i-1] = matrix2[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << rotate[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    // int matrix[3][3] = {{1, 2, 3},
    //             {4, 5, 6},
    //             {7, 8, 9}};
    int matrix2[4][4] = {{15, 1, 9, 11},
                        {2, 4, 8, 10},
                        {13, 3, 6, 7},
                        {15, 14, 12, 16}};

    rotateMatrix(matrix2, 4, 4);
    return 0;
}