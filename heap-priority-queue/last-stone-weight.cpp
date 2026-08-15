class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        int smash_diff;
        priority_queue<int> pq;
        int n = stones.size();
        for(int i =0; i<n; i++)
        {
            pq.push(stones[i]);
        }
        if(pq.size()==1)
            return pq.top();
        else
        {
            while(pq.size()>1)
            {
                int largest = pq.top();
                pq.pop();
                int second_largest = pq.top();
                pq.pop();
                smash_diff = largest - second_largest;
                pq.push(smash_diff);
            }    
        }
        return smash_diff;
    }
};