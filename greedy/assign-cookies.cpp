class Solution {
public:
    int findContentChildren
    (vector<int>& g, vector<int>& s)
    {
        int g_size= g.size();
        int s_size= s.size();
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int contentChildren = 0;
        int childIdx = 0; 
        int cookieIdx = 0; 

        
        while (childIdx < g.size() && cookieIdx < s.size()) {
            if (s[cookieIdx] >= g[childIdx]) {
                contentChildren++;
                childIdx++;
            }
            cookieIdx++;
        }

        return contentChildren;
        
    }
};