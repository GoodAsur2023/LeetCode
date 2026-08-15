class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        int count_1 = 0;
        for(int i = 0; i < nums.size() ; i++)
        {
            if(nums[i]==candidate)
                count_1++;
        }

        if( count_1 > nums.size()/2)
            return candidate;

        return -1;
    }
};
