#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
	vector<vector<int>> ans;
	for(int i = s; i<=e; i = i+w){
		int j = (i - 32)*5/9;
		ans.push_back({i,j});
	}
	return ans;
}
