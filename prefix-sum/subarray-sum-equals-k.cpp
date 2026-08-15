class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int count = 0;
        int currentSum = 0;

        //Map to stor the freq of prefix sums
        unordered_map<int, int> prefixMap;

        prefixMap[0] = 1;

        for(int i = 0; i<nums.size(); ++i)
        {
            currentSum += nums[i];
            if(prefixMap.find(currentSum-k) != prefixMap.end())
            {
                count += prefixMap[currentSum - k];
            }

            prefixMap[currentSum]++;
        }

        return count;
    }
};