int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int s = citations.size();
        for(int i=0;i<s;i++){
            int num = s - i;
            if(citations[i]>= num) return num;
        }
        
        return 0;
    }
