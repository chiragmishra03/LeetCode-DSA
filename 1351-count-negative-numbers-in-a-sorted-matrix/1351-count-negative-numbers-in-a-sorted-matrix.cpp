class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
int i = grid.size() - 1;
int j = 0;
int cnt = 0;

while (i >= 0 && j <= grid[i].size() - 1) {
    if (grid[i][j] < 0) {
        cnt += grid[i].size() - j;
        i--;
    } 
    else 
    {
        j++;
    }
}
return cnt;
    }
};