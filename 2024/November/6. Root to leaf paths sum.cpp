class Solution {
  public:
    void solve(Node *root,int curr, vector<int> &v){
        if(root == NULL){
           
            return;
        }
        else{
            
            int temp = curr*10 + root->data;
            if(!root->left && !root->right){
                 v.push_back(temp);
                 return;
            }
            solve(root->left,temp,v);
            solve(root->right,temp,v);
        }
    }
    
    int treePathsSum(Node *root) {
        
        vector<int>v;
        int ans =0;
        solve(root,0,v);
        //   for(int i=0;i<v.size();i++)
        //   cout<<v[i]<<" ";
          
        for(int i=0;i<v.size();i++)
        ans += v[i];
        return ans;
        
    }
};
