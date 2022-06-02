class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int line = 0, row = 0;
        vector< vector<int> > ans(matrix[0].size());
        while(line < matrix[0].size()) {
            while(row < matrix.size()) {
                cout << matrix[row][line] << " ";
                ans[line].push_back(matrix[row][line]);
                row++;
            }
            line++;
            row = 0;
        }
        return ans;
    }
};
