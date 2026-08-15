class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int charIndexMap[256];
        std::fill(std::begin(charIndexMap), std::end(charIndexMap), -1);
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;
        while(r<n)
        {
            if(charIndexMap[s[r]] != -1){
                if(charIndexMap[s[r]] >= l)
                {
                    l = charIndexMap[s[r]] + 1;
                }
            }

            int len = r - l + 1;
            maxLen = max(len, maxLen);

            charIndexMap[s[r]] = r;
            r++;
        }
        return maxLen;

    }
};