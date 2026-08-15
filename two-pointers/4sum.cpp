class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& sum, int target) {
        int n = sum.size();
        vector<vector<int>> ans;

        sort(sum.begin(), sum.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && sum[i] == sum[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && sum[j] == sum[j - 1]) continue;

                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum_1 = (long long)sum[i] + sum[j] +
                                    sum[left] + sum[right];

                    if (sum_1 == target) {
                        ans.push_back({sum[i], sum[j],
                                       sum[left], sum[right]});

                        while (left < right && sum[left] == sum[left + 1])
                            left++;
                        while (left < right && sum[right] == sum[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum_1 < target) left++;
                    else right--;
                }
            }
        }
        return ans;
    }
};