#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[] = "hello world";
    strcpy(str1, str2);
    cout << str1 << endl;
    return 0;
}