class Solution {
public:
    void solveit(vector<vector<int>>& matrix, int i, int j){  
            for(int k=0; k<matrix[0].size(); k++){
                matrix[i][k]=0;
            }
            for(int k=0; k<matrix.size(); k++){
                matrix[k][j]=0;
            }
    }


    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> check;
        check=matrix;
   
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(check[i][j]==0){
                    solveit(matrix,i,j);
                }
            }
        }
    }

};
