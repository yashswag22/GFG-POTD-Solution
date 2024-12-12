class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
          map<int,int>m;
          
          for(int i=0;i<arr.size();i++){
              m[arr[i]]++;
          }
          
          return m[target];
    }
};
