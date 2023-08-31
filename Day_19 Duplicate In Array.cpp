int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int add = 0;
    int s = arr.size();
    int sum = s * (s + 1) / 2;

	for(int i = 0; i < s; i++){
        add = add + arr[i];
    }
    return s - (sum - add);
}
