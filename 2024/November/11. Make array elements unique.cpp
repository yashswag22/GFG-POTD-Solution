class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        int count =0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>=arr[i+1]){
                count+= arr[i]-arr[i+1] +1;
                arr[i+1] = arr[i]+1;
            }
        }
        return count;
    }
};
