class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        
        unordered_map<int,int>m;
        int ans =0;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
       // for(int i=0;i<arr.size();i++)
       // cout<<arr[i]<<" "<<m[arr[i]]<<" "<<endl;
       // cout<<endl;
        for(int i=0;i<arr.size();i++){
            if(m.count(arr[i]+k) != 0){
                ans += m[arr[i]+k];
               ///cout<<arr[i]<<" "<<m[arr[i]]<<" "<<ans<<endl;
            }    
        }
        
        return ans;
    }
};
