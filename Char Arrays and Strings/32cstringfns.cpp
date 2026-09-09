#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100] = "xyz";
    char str2[100] = "abc";
    cout << strcmp(str1, str2) << endl;
    return 0;
}