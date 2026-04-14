#include<bits/stdc++.h>
using namespace std;
int find(vector<int>arr,int n,int k){
    
    // int largesub=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=0;j<n;j++){
    //         sum+=arr[j];
    //          if(sum==k){
    //             largesub=max(i-j+1,largesub);
               
    //              }
    //     }
    
    // }
    // return largesub;
    //+-----+-----+----+-----+---------+---------------+----------------+--------------------------------+-------------------------------+
   // better appraoch hashmap and prefix sum
    //   map<int,int>m;
    //   int sum=0;
    //   int maxlen=0;
    //   for(int i=0;i<n;i++){
    //     sum+=arr[i];
    //     if(sum==k){
    //         maxlen =i+1;
    //     }
    //     if(m.find(sum-k)!=m.end()){
    //         maxlen = max(maxlen,i-m[sum-k]);
    //     }
    //     if(m.find(sum)==m.end()){
    //         m[sum]=i;
    //     }
    //   }
    //   return maxlen;
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //optimal appproach
    int left=0;
    int right=0;
    int sum=0;
    int maxlen=0;
    while(right<n){
        sum+=arr[right];
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen= max(maxlen,right-left+1);
        }
        right++;
    }

   
return maxlen;









}




















int main(){
    vector<int>v={3, 2, 1};
    int  n= v.size();
    int k=3;
    int result = find(v,n,k);
    cout<<result<<endl;
    return 0;
}