// Find the element in the array which is occuring only once

#include <iostream>
#include <vector>

using namespace std;

int findOne(vector<int> nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
        ans = ans ^ nums[i];
    
    return ans;
}

int main (){
    vector<int> nums = {1,1,2,2,3,4,4,5,5};
    cout << findOne(nums);
}