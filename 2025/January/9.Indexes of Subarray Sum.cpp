vector<int> subarraySum(vector<int> &arr, int target) {
        bool check = false;
        
        vector<int>v(1,-1);
        vector<int>ans(2,1);
        
        if(arr.size()==1){
             if(arr[0]!=target)
              return v;
              else{
                 return ans;
              }
         }
          
        int s=0,e = 0; // s = start , e = end
        int n = arr.size();
      
        int sum = arr[0];
          
         
        while(s<n && e < n){
            if(sum == target){
                check = true;
                break;
            }
            else if(sum > target){
                sum -= arr[s];
                s++;
            }
            else if( sum < target){
                e++;
                if(e<n)
                sum+=arr[e];
            }
        }
        if(check == false)
        return v;
        else{
            ans[0]=s+1;
            ans[1]=e+1;
        }
        
        return ans;
    }
