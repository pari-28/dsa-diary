#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;
    cout << *ptr << "\n"; //25
    return 0;
}