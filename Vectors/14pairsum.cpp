#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int currSum = 0;
    vector<int> ans;
    for (int i=0; i<arr.size(); i++) {
        for (int j = i+1; j<arr.size(); j++) {
            // cout << arr[i] << "," << arr[j] << " ";
            currSum = arr[i] + arr[j];
            if (currSum == target) {
                // cout << i << "," << j << endl;
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}