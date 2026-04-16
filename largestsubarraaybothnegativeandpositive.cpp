 #include<bits/stdc++.h>
using namespace std;
int find(vector<int>arr,int n,int k){
     map<int,int>m;
      int sum=0;
      int maxlen=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];
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
         vector<int>v={3, 2, 1,3,2,4,5};
    int  n= v.size();
    int k=6;
    int result = find(v,n,k);
    cout<<result<<endl;
    return 0;
     
    }