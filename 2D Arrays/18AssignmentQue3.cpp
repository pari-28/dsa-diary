#include <iostream>
using namespace std;

void transposeMatrix(int (*mat)[3], int n, int m) {
    int transpose[3][2] = {{0}};

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    for (int j=0; j<m; j++) {
        for(int i=0; i<n; i++) {
            cout << transpose[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
    transposeMatrix(mat, 2, 3);
    return 0;
}