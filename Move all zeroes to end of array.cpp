class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int nonzeroindex =0;
	   int zeroindex =0;
	   int check =0;
	   while(nonzeroindex <= n-1 && zeroindex <n-1)
	   {
	       while(arr[zeroindex] != 0 && zeroindex <n-1)
	         
	             zeroindex++;
	             
	         
	          if(check == 0)
	          nonzeroindex = zeroindex+1;
	          check++;
	          
	          
	          while(arr[nonzeroindex] == 0 && nonzeroindex <= n-1)
	            nonzeroindex++;
	           
	           if(nonzeroindex <n && zeroindex < n-1) 
	            swap(arr[zeroindex],arr[nonzeroindex]);
	            
	            zeroindex++;
	            nonzeroindex++;
	   }
	  
	}
};
