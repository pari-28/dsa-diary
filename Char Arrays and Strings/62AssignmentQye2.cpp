#include <iostream>
#include <string>
using namespace std;

bool stringSwap(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int count = 0;
    int firstdiffnum = 0;
    int seconddiffnum = 0;
    for (int i=0; i<str1.length(); i++) {

        if (str1[i] !=  str2[i]) {
            cout << i << endl;
            count++;
            if (count == 1) {
                firstdiffnum = i;
            }
            else if (count == 2) {
                seconddiffnum = i;
            }
        }
        
    }
    cout << count << endl;
    if (count == 0) {
        return true;
    }
    if (count == 1) {
        return false;
    }
    if (count > 2) {
        return false;
    }
    if (count == 2) {
        swap(str2[firstdiffnum], str2[seconddiffnum]);
    }
    cout << str1 << endl;
    cout << str2 << endl;

    return str1 == str2;
   
}

int main() {
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << stringSwap(str1, str2) << endl;
    return 0;
}