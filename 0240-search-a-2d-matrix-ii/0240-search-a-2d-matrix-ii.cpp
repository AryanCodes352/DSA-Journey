class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        int i = 0;
        int j = col-1;
        
        while(i<row && j>=0){
            if(mat[i][j]==x){
                return true;
            }else if(mat[i][j]<x){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};
