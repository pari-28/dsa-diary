#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    vec.push_back(4);
    cout << "size : " << vec.size() << endl; //1
    cout << "capacity : " << vec.capacity() << endl; //1
    return 0;
}