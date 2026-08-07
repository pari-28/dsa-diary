#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout << (ptr2 > ptr1) << "\n"; // yes : true : 1
    cout << (ptr2 < ptr1) << "\n"; // no : false : 0

    cout << (ptr1 == arr) << "\n"; // yes : true : 1 . hence, they point to same memory location
    return 0;
}