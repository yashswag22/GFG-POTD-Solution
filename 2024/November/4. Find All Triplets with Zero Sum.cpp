class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        
        vector<vector<int>>v;
        
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                for(int k = j+1;k<arr.size();k++){
                    vector<int>temp;
                    if(arr[i]+arr[j]+arr[k] == 0){
                        temp.push_back(i);
                        temp.push_back(j);
                        temp.push_back(k);
                        sort(temp.begin(),temp.end());
                        v.push_back(temp);
                    }
                }
            }
        }
        
        return v;
    }
};
