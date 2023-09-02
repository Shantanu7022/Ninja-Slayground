#include <bits/stdc++.h> 
bool checkDiff(int *arr,int N,int k)
{
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i = 0; i < N; i++){
        mp[arr[i]] = i;
        arr[i] += k;
    }
    for(int i = 0; i < N; i++){
        if(mp.count(arr[i]) > 0 && i != mp[arr[i]]){
            return 1;
        }
    }
    return 0;
}
