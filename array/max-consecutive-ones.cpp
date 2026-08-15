class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int most_consec=0;
        int count = 0;   
        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
                most_consec = max(most_consec, count);
            }

            else
            {
                count = 0;
            }
        } 
        return most_consec;
    }
};