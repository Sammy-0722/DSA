#include<bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
     int n= prices.size();
     int minprice=INT_MAX;
     int maxprofit=0;
    for(int price:prices){
        if(price<minprice){
            minprice=price;
        }
        else{
            maxprofit = max(maxprofit,price-minprice);
        }
    }
    return maxprofit;
    }
    int main(){
        vector<int>V={7,1,5,3,6,4};
        int result = maxProfit(V);
        cout<<result<<endl;
    }
