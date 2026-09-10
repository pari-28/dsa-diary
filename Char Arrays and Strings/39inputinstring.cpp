#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str, '$'); // delimiter pass as a 3rd argument
    cout << str << endl;
    return 0;
}