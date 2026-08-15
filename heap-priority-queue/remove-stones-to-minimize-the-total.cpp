class Solution {
public:
    int minStoneSum(vector<int>& piles, int k)
    {
        int n = piles.size(); 
        //default max heap defn
        priority_queue<int> pq;
        int sum = 0;
        //Iterate thru pq, push in pq and get sum
        for(int i =0; i<n; i++)
        {
            pq.push(piles[i]);
            sum+=piles[i];
        }
        //make another loop for k steps.
        for(int i =1 ; i <=k;i++)
        {
            int max_el = pq.top();
            pq.pop();//pop the maxm_el i.e. pq.pop
            int remove = max_el/2; //reduce remove from max_el;
            sum-=remove;
            max_el-= remove;
            pq.push(max_el);
        }
        return sum;


    }
};