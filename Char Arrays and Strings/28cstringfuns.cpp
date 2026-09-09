#include <iostream>
#include <climits>
using namespace std;

int main() {
    char str1[100] = "abc";
    char str2[100] = "xyz";
    strcat(str2, str1);
    cout << str2 << endl;
    cout << str1 << endl;
    return 0;
}