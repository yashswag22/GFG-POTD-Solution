class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        set<int>s;
        for(auto it:mpp)
        {
            if(s.find(it.second)!=s.end())
            return false;
            else
            s.insert(it.second);
        }
        
        return true;
    }
};
