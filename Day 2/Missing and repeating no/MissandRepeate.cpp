#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int i=0;
	pair<int,int>ans;
	while(i<n){
		if(arr[i]!=arr[arr[i]-1]){
			swap(arr[i],arr[arr[i]-1]);
		}else{
			i++;
		}
	}
	for(int j=0;j<n;j++){
		if(arr[j]!=j+1){
			ans.first=(j+1);
			ans.second=(arr[j]);
		}
	}
	return ans;
	
}
