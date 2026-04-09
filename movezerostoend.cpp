#include<bits/stdc++.h>
using namespace std;
//  vector<int> moveseros(vector<int>&nums){
//       int n = nums.size();
//       vector<int>temp;
//       for(int i=0;i<n;i++){     // for storing the  non zeros number to the temp
//         if(nums[i]!=0){
//             temp.push_back(nums[i]);
//         }
//       }
//       for ( int i = 0; i < temp.size(); i++)
//       {
//        nums[i]=temp[i];
//       }
//       for(int i=temp.size();i<n;i++){
//         nums[i]=0;
//       }
//       return nums;
           // Brute force merthods
// }

// optinmal Approach two pointer here it is i and j
vector<int> moveseros(vector<int>&nums){
    int n = nums.size();
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    
      return nums;




}

int main(){
    vector<int>v(6);
    cout<<"Enter the element of the array "<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    moveseros(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
