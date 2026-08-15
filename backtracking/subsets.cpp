class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> result;
        vector<int> currentSubset;
        backtrack(0,nums, currentSubset, result);
        return result;
    }

private:
    void backtrack(int startIndex, const vector<int>& nums, vector<int>& currentSubset, vector<vector<int>>& result)
    {
        result.push_back(currentSubset);

        for(int i = startIndex; i<nums.size(); ++i)
        {
            // Take the current element
            currentSubset.push_back(nums[i]);

            // Recurse to build further combinations
            backtrack(i+1, nums, currentSubset, result);

            // Clean up / Undo the choice (Backtrack)
            currentSubset.pop_back();
        }
    }
};