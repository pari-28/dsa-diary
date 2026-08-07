#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;

    int arr[] = {5, 2, 6, 8, 3};
    cout << arr << endl;
    cout << arr+1 << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    return 0;
}