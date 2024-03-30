class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), row = 0, l = 0, r = n-1;
        while(row < m && matrix[row][0] <= target)
            row++;
        if(row > 0)
            row--;
        cout << row;
        while(l<= r) {
            int mid = (l+r)/2;
            if(matrix[row][mid] == target) {
                return true;
            } else if(matrix[row][mid] < target) {
                l = mid +1;
            } else {
                r = mid -1;
            }
        }
        return false;
    }
};