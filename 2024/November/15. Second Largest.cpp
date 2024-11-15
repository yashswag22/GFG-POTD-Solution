class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
    sort(arr.begin(),arr.end());
       int n= arr.size();
      for(int i=n-2;i>=0;i--){
          if(arr[i]!=arr[i+1])return arr[i];
      }
      return -1;
    }
};
