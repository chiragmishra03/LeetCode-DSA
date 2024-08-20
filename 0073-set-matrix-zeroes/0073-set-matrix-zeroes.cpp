class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool firstRowisZero=false;
        bool firstColisZero=false;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    
                    //first check
                    if(i==0)firstRowisZero=true;
                    if(j==0)firstColisZero=true;
                    
                    //second check
                    matrix[i][0]=0;    //mark row as zero
                    matrix[0][j]=0;    //mark col as zero
                }
            }
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        if(firstRowisZero){
            for(int i=0;i<cols;i++){
                matrix[0][i]=0;
            }
        }
        if(firstColisZero){
            for(int i=0;i<rows;i++){
                matrix[i][0]=0;
            }
        }
    }
};