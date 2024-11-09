class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int>v;
        
        set<int>s;
        for(int i=0;i<a.size();i++)s.insert(a[i]);
        for(int j=0;j<b.size();j++)s.insert(b[j]);
        for(int in : s) v.push_back(in);
        return v;
    }
};
