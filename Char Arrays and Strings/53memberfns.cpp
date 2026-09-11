#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I love coding in c++ & c++. I don't like c++";
    
    int idx = str.find("python");
    cout << idx << endl;
    return 0;
}