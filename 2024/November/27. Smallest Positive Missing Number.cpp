class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        
        // set<int>s(arr.begin(),arr.end());
        
        // int m = *max_element(arr.begin(),arr.end());
        
        // if(m<=0) return 1;
        // for(int i =1;i<m;i++){
        //     if(s.find(i)==s.end()) return i;
        // }
        
        // return (m+1);
        
        // -------- O(n) time complexity ----------
        int ans =1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=0)continue;
            
            else if(arr[i] == ans) ans++;
            else if(arr[i]< ans) continue;
            else if(arr[i]>ans) return ans;
        }
        if(arr[arr.size()-1] <= 0) return 1;
        return arr[arr.size()-1]+1;
    }
};
