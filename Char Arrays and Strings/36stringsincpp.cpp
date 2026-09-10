#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    cout << str << endl;
    str = "yellow"; // not allowed in char array
    cout << str << endl;
    return 0;
}