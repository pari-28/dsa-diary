//Staircase Search
#include <iostream>
using namespace std;

// T.C. -> O(n + m)

//case 2: starting from bottom left corner

bool search(int matrix[][4], int n, int m, int key) {
    int i = n-1;
    int j = 0;
    while(i >= 0 && j < m) {
        if (matrix[i][j] == key) {
            cout << " key found : (" << i << "," << j << ")" << endl;
            return true;
        } else if (matrix[i][j] > key) {
            //right
            j++;
        } else {
            //up
            i--;
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