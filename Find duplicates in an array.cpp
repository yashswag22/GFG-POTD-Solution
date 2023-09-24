class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
      // sort(arr,arr+n);
       vector<int>v;
       unordered_map<int,int>mpp;
       
       for(int i=0;i<n;i++)
       {
       
          mpp[arr[i]]++;
       }
       
       for(auto it=mpp.begin();it!=mpp.end();it++)
       {
           if((*it).second>1)
           v.push_back((*it).first);
       }
       if(v.empty())
       v.push_back(-1);
       
       sort(v.begin(),v.end());
       return v;
    }
};
