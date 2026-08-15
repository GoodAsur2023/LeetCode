class Solution {
    stack<int> st;
    unordered_map<int,int> next_greater_map;
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        for(int i = nums2.size() -1 ; i >= 0; i--)
        {
            while(!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }

            if(st.empty())
            {
                next_greater_map[nums2[i]] = -1;
            }

            else
            {
                next_greater_map[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> result;
        for(int num : nums1)
        {
            result.push_back(next_greater_map[num]);
        }

        return result;
    }


};