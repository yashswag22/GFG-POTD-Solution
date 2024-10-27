class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
       set<int>s ;
       sort(arr.begin(),arr.end());
       
       for(int i=0;i<arr.size()-1;i++){
            if(s.find(arr[i])!=s.end()) return true;
            
           for(int j= i+1;j<arr.size();j++){
               s.insert(arr[i]+arr[j]);
           }
       }
       
        if(s.find(arr[arr.size()-1])!=s.end()) return true;
       
    //   for(int i=0;i<arr.size();i++){
          
    //   }
       
       return false;
    }
};
