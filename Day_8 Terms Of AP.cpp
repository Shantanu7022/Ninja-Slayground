#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int> arr;
    int  num = 1;
    while(arr.size() < x){
        int ans = 3*num+2;
        if(ans % 4 != 0){
            arr.push_back(ans);
        }
        num++;
    }
    return arr;
}
