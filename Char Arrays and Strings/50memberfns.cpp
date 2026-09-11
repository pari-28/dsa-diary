#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I love coding in c++ & c++. I don't like c++";
    
    cout << str.find("c++", 20) << endl;
    return 0;
}