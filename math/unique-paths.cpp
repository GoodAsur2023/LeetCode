class Solution {
private:
    int func(int m, int n) {
        vector<int> dp_prev(n, 0);

        for (int i = 0; i < m; i++) {
            vector<int> temp(n, 0);

            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    temp[j] = 1;
                    continue;
                }

                int up = 0;
                int left = 0;

                if (i > 0)
                    up = dp_prev[j];

                if (j > 0)
                    left = temp[j - 1];
                
                temp[j] = up + left;
            }
            dp_prev = temp;
        }

        return dp_prev[n - 1];
    }

public:
    int uniquePaths(int m, int n) {
        return func(m, n);
    }
};