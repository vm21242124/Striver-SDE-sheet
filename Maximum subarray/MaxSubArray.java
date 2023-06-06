
import java.util.* ;
import java.io.*; 

public class MaxSubArray {
	
	public static long maxSubarraySum(int[] arr, int n) {
		// write your code here
        //using kadanes algo
        
		long sum=0;
		long maxi=arr[0];
		for(int i=0;i<n;i++){
			sum+=arr[i];
			maxi=Math.max(maxi,sum);
			if(sum<0)sum=0;	
		}
		if(maxi<0)return 0;
		else return maxi;
	}

}
