#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int diff = 0; // number of mismatches
    char diffChar1, diffChar2;

    for (int i=0; i<str1.length(); i++) {
        if (str1[i] != str2[i]) {
            if (!diff) { // diff == 0 (false)
                // First mismatch
                diffChar1 = str1[i];
                diffChar2 = str2[i];
            } 
            else { // diff != 0 (true)
                // Second mismatch
                if (str1[i] != diffChar2 || str2[i] != diffChar1) {
                    return false;
                }
            }
            diff++;
        }
        if (diff > 2) {
            return false;
        }
    }
    if (diff == 1) {
        return false;
    }
    
    return true;
}

int main() {
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    cout << areAlmostEqual(str1, str2); //O/P -> 1 (true)

    return 0;
}