#include <bits/stdc++.h> 
void solve(vector<int>&v,vector<int>&arr,int n,int i,int sum){
    if(i>n-1){
        return;
    }
    solve(v,arr,n,i+1,sum);
    sum+=arr[i];
    v.push_back(sum);
    solve(v,arr,n,i+1,sum);

}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n=num.size();
    if(n==0)return {};
    vector<int>v;
    v.push_back(0);
    solve(v,num,n,0,0);
    sort(v.begin(),v.end());
    return v;
}