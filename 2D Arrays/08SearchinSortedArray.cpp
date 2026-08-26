//Brute force 
#include <iostream>
using namespace std;

void search(int matrix[][4], int n, int m, int key) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == key) {
                cout << "key found at : " << i << "," << j << endl;
                return;
            }
        }
    }
    cout << "key not found" << endl;
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    search(matrix, 4, 4, 51);
    return 0;
}