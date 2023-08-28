#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
