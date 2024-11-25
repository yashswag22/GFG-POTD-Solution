class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
       int ans = INT_MIN;
       int maxl= INT_MIN,maxr = INT_MIN;
       int l=1,r=1;
       for(int i=0;i<arr.size();i++){
           
          
           
            l = l* arr[i];
            maxl = max(maxl,l);
            if(arr[i] == 0)
               l = 1;
       }
       
       for(int i=arr.size()-1;i>=0;i--){
          
              
            r = r* arr[i];
            maxr = max(maxr,r);
             if(arr[i] == 0)
               r = 1;
       }
       //cout<<maxl<<" "<<maxr<<endl;
      return ans = max(maxl,maxr);
      // https://www.youtube.com/watch?v=QfHCc6ckGRo
    }
};
