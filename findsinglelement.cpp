#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
  int arr[]={2,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int result = find(arr,n);
  cout<<result<<endl;
  return 0;
}