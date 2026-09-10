#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100] = "mango";
    char str2[100] = "x"; // no reln with length of the strings
    cout << strcmp(str1, str2) << endl;
    return 0;
}