class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
      int a[26]={0};
      for(int i=0;i<s.size();i++)
      {
          int chara = s[i];
          a[(chara-97)]++;
      }
      for(int i=0;i<s.size();i++)
      {   int chara = s[i];
          if( a[(chara-97)]==1)
          {
              return s[i];
             
          }
        
      }
      
      return '$';
       
    }

};
