#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << ptr << "\n";
    ptr = ptr + 3;
    ptr = ptr - 3;
    cout << ptr << "\n";
    cout << ptr+2 << "\n";

    return 0;
}