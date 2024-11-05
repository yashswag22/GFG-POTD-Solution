void rotate(vector<vector<int> >& mat) {
   
       for(int i=0;i<mat[0].size();i++){
           for(int j =i;j<mat[0].size();j++){
               swap(mat[i][j],mat[j][i]);
           }
       }
       int m = mat.size()-1;
       
       for(int j=0;j<mat[0].size();j++){
           for(int i=0;i<(mat[0].size()/2);i++){
               swap(mat[j][i],mat[j][m-i]);
           }
       }
}
