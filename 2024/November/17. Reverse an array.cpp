class Solution {
  public:
    void reverseArray(vector<int> &arr) {
       int m = arr.size() -1;
       for(int i=0;i<arr.size()/2;i++) swap(arr[i],arr[m -i]);   
       
    }
};
