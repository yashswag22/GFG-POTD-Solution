class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        
        set<int>s(arr.begin(),arr.end());
        
        int m = *max_element(arr.begin(),arr.end());
        
        if(m<=0) return 1;
        for(int i =1;i<m;i++){
            if(s.find(i)==s.end()) return i;
        }
        
        return (m+1);
    }
};
