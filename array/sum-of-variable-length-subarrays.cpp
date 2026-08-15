class Solution {
public:
    int subarraySum(vector<int>& nums)
    {
        int n = nums.size();
        int total_subarray_sum = 0;

        for (int i =0; i <n;++i)
            {
                int start = max(0, i-nums[i]);
                int subarray_sum=0;
                int end = i;

                for (int j = start ; j <= end; ++j)
                    {
                        subarray_sum += nums[j];
                        
                    }
                total_subarray_sum += subarray_sum;
            }
        return total_subarray_sum;
    }
};