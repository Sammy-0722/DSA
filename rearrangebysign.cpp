#include<bits/stdc++.h>
using namespace std;







void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int index = -1;

        // Step 1: Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                index = i;
                break;
            }
        }

        // If no such index exists, it means array is in descending order
        // So reverse it to get the smallest permutation
        if (index == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Step 2: Find the next greater element from the right
        for (int i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Step 3: Reverse the remaining right half
        reverse(arr.begin() + index + 1, arr.end());
    }


int main() {
    vector<int> arr = {1, 2, 3};

    Solution obj;
    obj.nextPermutation(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}