class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        int netsum = 0;
        for(int i=0;i<arr.size();i++){
            netsum += arr[i];
        }
        bool c1=false,c2=false,c3=false;
        int f= INT_MAX,l= INT_MAX;
        int esum = netsum/3;
        if(netsum%3 == 0){
            int sum =0;
            for(int i=0;i<arr.size();i++){
                sum  += arr[i];
                if(sum == esum && i <= f){
                    c1 = true;
                    f = i;
                }
                else if(sum == esum*2 && i>f && i<= l){
                    c2 = true;
                    l=i;
                }
                else if(sum == esum * 3 && i == arr.size()-1){
                    c3 = true;
                    if(c1 == true && c2 == true && c3 == true)
                    {
                         vector<int>temp;
                         temp.push_back(f);
                        temp.push_back(l);
                        return temp;
                    }
                }
            }
            if(c1 == false || c2 == false || c3 == false)
            {
            vector<int>temp;
            temp.push_back(-1);
            temp.push_back(-1);
            return temp;
            }
        }
        else{
            vector<int>temp;
            temp.push_back(-1);
            temp.push_back(-1);
            return temp;
        }
    }
};
