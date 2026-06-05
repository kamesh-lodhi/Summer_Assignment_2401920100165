class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {}; 

        int l = 0, r = matrix[0].size() - 1;
        int top = 0, down = matrix.size() - 1;
        vector<int> ans;

        while (l <= r && top <= down) {
            // Traverse top row
            for (int column = l; column <= r; column++) {
                ans.push_back(matrix[top][column]);
            }
            top++;

            // Traverse right column
            for (int row = top; row <= down; row++) {
                ans.push_back(matrix[row][r]);
            }
            r--;

            // Traverse bottom row
            if (top <= down) {
                for (int column = r; column >= l; column--) {
                    ans.push_back(matrix[down][column]);
                }
                down--;
            }

            // Traverse left column
            if (l <= r) {
                for (int row = down; row >= top; row--) {
                    ans.push_back(matrix[row][l]);
                }
                l++;
            }
        }
        return ans;
    }
};
