class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int i = 0;
        int j = matrix[i].size() - 1;

        while(i < n && j >= 0){
            if(matrix[i][j] == target) return true;


            if(matrix[i][j] > target) j--;
            else i++;
        }

        return false;
    }
};