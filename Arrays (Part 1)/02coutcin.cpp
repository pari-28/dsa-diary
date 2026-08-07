#include <iostream>
using namespace std;

int main() {

    int len;
    cout << "Enter the length of array: " << endl;
    cin >> len;

    int arr[len];
    int n = sizeof(arr) / sizeof(int);

    cout << "Enter the elements: " << endl;

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}