class Solution {
    stack<int>st;
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>NGE(n,-1);
        for(int i = 2*n-1; i>=0;i--)
        {
            int current_num = nums[i % n];
            while(!st.empty() && st.top() <= current_num)
            {
                st.pop();
            }
            if(i<n)
            {
                NGE[i] = st.empty() ? -1: st.top();
            }
            st.push(current_num);
        }
        return NGE;
    }
};