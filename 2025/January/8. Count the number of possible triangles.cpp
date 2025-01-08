int countTriangles(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n= arr.size()-1;
        int count =0;
        for(int i = n;i>1;i--){
            
            int s =0,e = i-1;
            
            while(s < e){
                int sum = arr[s]+arr[e];
                
                if(sum > arr[i]) {
                count += (e-s);
                    e--;
                }
                else{
                    s++;
                }
            }
            
        }
        
            return count;
    }
