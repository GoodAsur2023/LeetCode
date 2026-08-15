class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
    {
        long long n = grid.size();
        long long N = n * n; // total elements in the grid

        long long sum_N = (N * (N + 1)) / 2;
        long long sum_N_sq = (N * (N + 1) * (2 * N + 1)) / 6;

        long long sum = 0;
        long long sum_sq = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                long long val = grid[i][j];
                sum += val;
                sum_sq += val * val;
            }
        }

        long long val1 = sum - sum_N;
        
        // val2 = X^2 - Y^2
        long long val2 = sum_sq - sum_N_sq;
        
        // val2 = (X^2 - Y^2) / (X - Y) = X + Y
        val2 = val2 / val1;
        
        // X = ((X - Y) + (X + Y)) / 2
        long long x = (val1 + val2) / 2;
        
        // Y = X - (X - Y)
        long long y = x - val1;
        
        return {(int)x, (int)y};      
    }
};