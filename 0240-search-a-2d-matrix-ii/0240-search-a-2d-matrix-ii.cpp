class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int col = n - 1;

        while(row < m && col >= 0) {
            if(target == matrix[row][col]) {
                return 1;
            }
            else if(target < matrix[row][col]) {
                col--;
            }
            else {
                row++;
            }
            
        }
        return 0;

        
    }
};