#include <iostream>
using namespace std;

int main() {
    char sentence[50];
    cin.getline(sentence, 50, '*');

    cout << "your word was: " << sentence << endl;
    cout << "length: " << strlen(sentence) << endl;

    return 0;
}