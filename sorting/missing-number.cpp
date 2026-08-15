class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int n = nums.size();
        int total_sum = (n*(n+1))/2;
        int array_sum = 0;
        for(int i = 0; i <n; i++)
        {
            array_sum = array_sum + nums[i];
        } 
        int missing_num = total_sum - array_sum;
        return missing_num;
    }
};