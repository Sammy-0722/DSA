#include<bits/stdc++.h>
using namespace std;
int missingnum(vector<int>&arr){
        int n= arr.size()+1;
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}
    
int main(){
    vector<int>v={8,3,4,5,2,1,7};
    int result = missingnum(v);
    cout<<result<<endl;
    return 0;
    }

