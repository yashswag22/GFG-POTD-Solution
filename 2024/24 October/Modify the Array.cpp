class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        
        vector<int> ans;
        int count =0;
        int n = arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>0 && arr[i] == arr[i+1])
            {
                arr[i]= arr[i]*2;
                arr[i+1] = 0;
                
            }
            else if(arr[i] == 0) count++;
        }
        // ========= Method one =============
        
        // for(int i=0;i<arr.size();i++)
        // if(arr[i] != 0) ans.push_back(arr[i]);
        
        // for(int i=0;i< count;i++)
        // ans.push_back(0);
        
        // return ans;
        // ========== method two ===========
        int i=0,j=1;
        while(i < n && j <n ){
            if(arr[i] != 0)i++ ;
            if(arr[j] == 0 || i>j) j ++;
            
            if(arr[i] == 0 && arr[j]!=0 && i<j){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
        }
        return arr;
    }
};
