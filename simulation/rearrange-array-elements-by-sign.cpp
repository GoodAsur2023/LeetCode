class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> answer_array(n,0);    
        int positive_ind = 0, negative_ind = 1;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]<0)
            {
                answer_array[negative_ind] = nums[i];
                negative_ind +=2;
            }

            else
            {
                answer_array[positive_ind] = nums[i];
                positive_ind +=2;
            }
        }
        return answer_array;
    }
};