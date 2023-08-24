#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {

  // Write your code here
  vector<vector<int>> ans(n, vector<int> (n, -1));
  int cnt = 1;
  for(int i = 0;  i < n; i++){
    for(int j = n-i-1; j < n; j++){
      if(cnt > 9){
        cnt = 1;
      }
      ans[i][j] = cnt;
      cnt++;
    }
  }
  return ans;

}
