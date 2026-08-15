class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int low_1 = 0, high_1 = nums.size() - 1;
        int first = -1;
        // Search for the first occurrence of the target
        while (low_1 <= high_1)
        {
            int mid = (low_1 + high_1) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                high_1 = mid - 1; // Search on the left half
            }
            else if (nums[mid] < target)
            {
                low_1 = mid + 1;
            }
            else
            {
                high_1 = mid - 1;
            }
        }

        int low_2 = 0, high_2 = nums.size() - 1;
        int last = -1;
        // Search for the last occurrence of the target
        while (low_2 <= high_2)
        {
            int mid = (low_2 + high_2) / 2;
            if (nums[mid] == target)
            {
                last = mid;
                low_2 = mid + 1; // Search on the right half
            }
            else if (nums[mid] < target)
            {
                low_2 = mid + 1;
            }
            else
            {
                high_2 = mid - 1;
            }
        }

        return vector<int>{first, last};  // Return a vector with the first and last positions
    }
};
