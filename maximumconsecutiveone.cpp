#include<bits/stdc++.h>
using namespace std;
int maxcount(int arr[],int n){
    int count =0;
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
           count=count+1;
            maxcount=max(count,maxcount);
        }
        else{
           count=0;
        }

    }
      return maxcount;
    -----------------------------------------------------------------
    

}





int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
// cout<<n;
    int result = maxcount(arr,n);
    cout<<result<<endl;
    return 0;
}