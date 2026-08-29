#include <iostream>
using namespace std;

void arrayTomatrix(int original[], int size, int m, int n) {

    if (size != m * n) {
        cout << "[]" << endl;
        return;
    }

    int matrix[400][400];

    int k = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = original[k];
            k++;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int original[3] = {1, 2, 3};
    // int m = 2;
    // int n = 2;

    int size = (sizeof(original)/sizeof(int));

    arrayTomatrix(original, size, 1, 3);

    return 0;
} 