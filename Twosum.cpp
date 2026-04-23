#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp;
        int n=nums.size();
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                temp.push_back(i);
                temp.push_back(j);
            }
        }
      } 
      return temp; 
    }
int main(){
    vector<int> v ={ 2,5,4,8,9,11};
    int target = 7;
    vector<int> result = twoSum(v,target);
    for(int nums:result){
        cout<<nums<<endl;
    }
    return 0;
}