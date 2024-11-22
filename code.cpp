class Solution {
public:

    int solve(vector<vector<int>>&mat, int sum, int row, int &target){
        /* base case */
        if(mat.size() == row){
            return abs(target - sum); // absolute difference
        }

        int min_ans = INT_MAX;
        /* recursive */
        for(int col = 0; col < mat[row].size(); col++){
            int rec_ans = solve(mat, sum + mat[row][col], row + 1, target);
            min_ans = min(rec_ans, min_ans); 
        }
        return min_ans;
    }

    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int sum = 0;
        int row = 0;
        return solve(mat, sum, row, target);
    }
};
