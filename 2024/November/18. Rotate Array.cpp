class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
       vector<int>v;
       for(int i=0;i< arr.size();i++)
       v.push_back(arr[i]);
       
       for(int i=0;i<arr.size();i++)
       v.push_back(arr[i]);
       
       //-- take remainder ------
       d = d%arr.size();
       
       int i = d;
       int si = 0;
       while(si < arr.size())
       {
           arr[si] = v[i];
           si++;
           i++;
       }
    }
};
