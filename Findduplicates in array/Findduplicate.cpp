#include <bits/stdc++.h>


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    // using binary search
    int low = 1, high = n-1, cnt = 0;
    
	while(low <= high){
		int mid = low + (high - low)/2;
        cnt = 0;

		// cnt number less than equal to mid
		for(auto num : arr){
			if(num <= mid){
				++cnt;
			}
		}

		if(cnt <= mid){
			low = mid + 1;
		}else{
			high = mid-1;
		}
	}

	return low;

}
