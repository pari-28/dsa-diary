#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << arr << "\n";
    int y = 25;
    arr = &y;
    return 0;
}