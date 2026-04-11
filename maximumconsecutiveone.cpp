#include<bits/stdc++.h>
using namespace std;
int maxcount(int arr[]){
      int n= arr.length();
      int count =0;
      
      for(int i= 0;i<n-1;i++){
        if(arr[i]==1){
            count=count+1;
        }
        else{
            count=0;
        }
}
      return count;
}




int main(){
    int arr[]={1,1,0,1,1,1};
    int result = maxcount(arr);
    cout<<result<<endl;
    return 0;
}