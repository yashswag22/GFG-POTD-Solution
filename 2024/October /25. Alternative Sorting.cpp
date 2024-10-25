class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int i =0;
        int j = arr.size()-1;
        
        while(i<=j){
            if(i!=j){
                ans.push_back(arr[j]);
                j--;
                ans.push_back(arr[i]);
                i++;
            }
            else {
                ans.push_back(arr[i]);
                i++;
            }
            
        }
        
        return ans;
    }
};
