class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sr = 0;
        int sc = 0;
        int er = matrix.size() - 1;
        int ec = matrix[0].size() - 1;
        while (sc <= ec && sr <= er) {
            // Print the first row
            for (int index = sc; index <= ec; index++) {
                ans.push_back(matrix[sr][index]);
            }
            sr++;
            for (int index = sr; index <= er; index++) {
                ans.push_back(matrix[index][ec]);
            }
            ec--;
            if (sr <= er) {
                for (int index = ec; index >= sc; index--) {
                    ans.push_back(matrix[er][index]);
                }
                er--;
            }
            if (sc <= ec) {
                for (int index = er; index >= sr; index--) {
                    ans.push_back(matrix[index][sc]);
                }
                sc++;
            }
        }

        return ans;
    }
};
