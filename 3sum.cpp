#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> st;   // store unique triplets

    // Better Approach: Hashing O(n^2)
    for (int i = 0; i < n; i++) {
        set<int> hashset;

        for (int j = i + 1; j < n; j++) {
            int third = -(nums[i] + nums[j]);

            // check if third element already exists
            if (hashset.find(third) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end()); // avoid duplicates
                st.insert(temp);
            }

            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets are:\n";

    for (auto triplet : result) {
        for (auto val : triplet) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}