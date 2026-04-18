#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{

    // for(int i = 0; i < n; i++) {
    //     int count = 0;

    //     for(int j = 0; j < n; j++) {
    //         if(nums[i] == nums[j]) {
    //             count++;
    //         }
    //     }

    //     if(count > n/7) {
    //         return nums[i];
    //     }
    // }

    // return -1;  // Not needed since majority always exists

    // better appraoch

    unordered_map<int, int> mp;
    int n = nums.size();
    for(int num:nums){
        mp[num]++;
        if(mp[num]>n/2){
            return num;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {7, 7, 1, 7, 1, 7, 7, 8, 8, 2, 7, 4, 7};

    cout << "Majority Element: " << majorityElement(nums);

    return 0;
}