//Staircase search
#include <iostream>
using namespace std;

//O(n + m)

//case 1: starting from top right corner

bool search(int matrix[][4], int n, int m, int key) {
    int i = 0;
    int j = m-1;
    while (i < n && j >= 0) {
        if (matrix[i][j] == key) {
            cout << "key found at : (" << i << "," << j << ")" << endl;
            return true;
        } else if (matrix[i][j] < key) {
            //down
            i++;
        } else {
            //left
            j--;
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
    search(matrix, 4, 4, 32);
    return 0;
}