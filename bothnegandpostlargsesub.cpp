#include<bits/stdc++.h>
using namespace std;
int findt (vector<int>sr,int n,int k){
      map<int,int>m;
      int sum=0;
      int maxlen=0;
      for(int i=0;i<n;i++){
        sum+=sr[i];
        if(sum==k){
            maxlen =i+1;
        }
        if(m.find(sum-k)!=m.end()){
            maxlen = max(maxlen,i-m[sum-k]);
        }
        if(m.find(sum)==m.end()){
            m[sum]=i;
        }
      }
      return maxlen;
    }
    int main(){
        vector<int>v={3,4,5,1,6,7,8};
        int n= v.size();
        int k=14;
        int result = findt(v,n,k);
    cout<<result<<endl;
    return 0;
    }