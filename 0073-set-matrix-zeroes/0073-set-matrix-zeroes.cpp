class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Create vectors to store the row and column indices
        vector<int> rows;
        vector<int> cols;
        
        // Traverse the matrix and store the row and column indices where 0 is found
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        
        // Set rows to 0
        for (int i = 0; i < rows.size(); i++) {
            int row = rows[i];
            for (int j = 0; j < n; j++) {
                matrix[row][j] = 0;
            }
        }
        
        // Set columns to 0
        for (int i = 0; i < cols.size(); i++) {
            int col = cols[i];
            for (int j = 0; j < m; j++) {
                matrix[j][col] = 0;
            }
        }
    }
};
