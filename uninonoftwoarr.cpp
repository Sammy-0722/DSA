#include<bits/stdc++.h>
using namespace std;
 vector<int> unionArray(vector<int> &arr1, vector<int> &arr2){
    int n1=arr1.size();
    int n2 =arr2.size();
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
     for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
 vector<int>result;
 for(auto it:st){
    result.push_back(it);
 }
 return result;
}
int main(){
    vector<int> arr1={1,3,2,4,5,5};
    vector <int>arr2={1,2,3,4,5,667,8};
    vector<int> ans =unionArray(arr1,arr2);
     for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}