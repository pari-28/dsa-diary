#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    char *ptr = &ch;
    cout << (void*)ptr << "\n";

    ptr++; // 1 char ++
    cout << (void*)ptr << "\n";

    return 0;
}