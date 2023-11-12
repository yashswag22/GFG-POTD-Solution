class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.size();
       string neww = str1.substr(2)+str1[0]+str1[1];
       string new2 = str1[n-2]+str1[n-1]+str1.substr(0,n-2);
       if(neww.find(str2)!= string::npos)
       return true;
       if(new2.find(str2)!=string::npos)
       return true;
       return false;
    }

};
