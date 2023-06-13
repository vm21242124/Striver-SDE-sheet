#include <bits/stdc++.h> 

void uniqueSubsetsHelper(int ind, vector<int> &arr, int n, vector<vector<int>> &ans, vector<int> &v){
    ans.push_back(v);
    for(int i = ind; i < n; i++){
        if(i != ind && arr[i] == arr[i-1])continue;
        v.push_back(arr[i]);
        uniqueSubsetsHelper(i+1, arr, n, ans, v);
        v.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    int ind = 0;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    vector<int> v;
    uniqueSubsetsHelper(ind, arr, n, ans, v);
    return ans;
}