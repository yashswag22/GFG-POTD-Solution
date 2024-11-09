class Solution {
  public:
    string minSum(vector<int> &arr) {
       sort(arr.begin(),arr.end());
       string t1="",t2="";
       
       for(int i=0;i<arr.size();i++){
           
           t1 += to_string(arr[i]);
           i++;
           if(i<arr.size())
           t2 += to_string(arr[i]);
           
       }
      string ans = ""; 
      reverse(t1.begin(),t1.end());
      reverse(t2.begin(),t2.end());
      
      int i=0,j=0,carry=0;
      while(i <t1.size() || j < t2.size()){
          int sum =0;
          if(i<t1.size()) sum+= (t1[i++] - '0');
          if(j<t2.size()) sum += (t2[j++] - '0');
          sum += carry;
          carry = sum/10;
          sum %= 10;
          ans += to_string(sum);
      }
      ans += to_string(carry);
      while(ans.back()== '0') ans.pop_back();
      reverse(ans.begin(),ans.end());
      return ans;
      
    }
};
