#include <iostream>
using namespace std;

int main() {
    int arr[] = { 2, 4, 9, 13, 16};
    int *ptr1 = arr; //points to 2
    int *ptr2 = ptr1 + 3; //points to 13

    cout << ptr2 << ",";
    cout << *ptr2 << "\n"; //dereference to cal value
    cout << ptr1 << ",";
    cout << *ptr1 << "\n";

    cout << ptr2 - ptr1 << "\n";
    return 0;
}