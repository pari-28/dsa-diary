#include <iostream>
using namespace std;

bool isPalindrome(char str[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (str[start++] != str[end--]) {
            cout << "not a valid palindrome";
            return false;
        }
    }
    cout << "valid palindrome\n";
    return true;
}

int main() {
    char word[] = "madam";
    isPalindrome(word, strlen(word));
    return 0;
}