#include<bits/stdc++.h>
using namespace std;
// brute force
// int missingnum(vector<int>&arr){
//       int n= arr.size();
//         for (int i = 1; i <= n; i++) {
//         bool found = false;
//         for (int j = 0; j < n - 1; j++) {
//             if (arr[j] == i) {
//                 found = true;
//                 break;
//             }
//         }

//         // If the current number is not present
//         if (!found)
//             return i;
//     }
//     return -1;
// }
//-----------------------------------------------------------------------------------------
// better appraoch
// int missingnum(vector<int>&arr){
//     int n= arr.size()+1;
//     vector<int>hash(n+1,0);
//     for(int i=0;i<n-1;i++){
//        hash[arr[i]]++;
//     }
//     for(int i=1;i<n;i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
//     return -1;
// }
//-------------------------------------------------------------------------------------------------------
//better appraoch
//approach 1
// int missingnum(vector<int>&arr){
//     int n = arr.size()+1;
//     int sum=0;
//     for(int i=0;i<n-1;i++){
//         sum +=arr[i];
//     }
//     long long expsum = n*(n+1)/2;
//     return expsum-sum;
// }
//----------------------------------------------------------------------------------------
//approcach 2
int missingnum(vector<int>&arr){
    int n = arr.size()+1;
    int xor1=0;
    for(int i=0;i<n-1;i++){
       xor1 ^= arr[i];
       xor1 ^=(i+1);
    }
    xor1^=n;
    return xor1;

}
    
int main(){
    vector<int>v={8,3,5,1,2,6,7};
    int result = missingnum(v);
    cout<<result<<endl;
    return 0;
    }

