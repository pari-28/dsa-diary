//using INT_MIN
#include <iostream>
using namespace std;

void trap(int *heights, int n) {
    int leftMax[20000];
    int rightMax[20000];

    leftMax[0] = INT_MIN;
    rightMax[n-1] = INT_MIN;

    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }

    for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i=0; i<n; i++) {
        int currTrapped;

        if (leftMax[i] == INT_MIN || rightMax[i] == INT_MIN) {
            currTrapped = 0;
        }
        else {
        currTrapped = min(leftMax[i], rightMax[i]) - heights[i];
        }
        cout << currTrapped << ",";
        if (currTrapped > 0) {
            waterTrapped += currTrapped;
        }
    }
    cout << endl;
    cout << "water trapped : " << waterTrapped << endl;

}

int main() {
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    trap(heights, n);
    return 0;
}