//we need to count the subarrays with sum equal to k
#include<bits/stdc++.h>
using namespace std;
int countsubarr(vector<int>&nums,int k){
    map<int,int>mpp;
    int prefixsum=0;
    int count=0;
    mpp[0]=1;
    for(int i =0;i<nums.size();i++){
      prefixsum+=nums[i];
      if(mpp.find(prefixsum-k)!=mpp.end()){
          count+=mpp[prefixsum-k];
      }
      
        mpp[prefixsum]++;
      
    }
    return count;
}

int main(){
    vector<int>v = {1,2,3};
    int k =3;
    int result =countsubarr(v,k);
    cout<<result<<endl;

    return 0;
}