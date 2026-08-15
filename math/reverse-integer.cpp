class Solution {
public:
    int reverse(int x)
    {
        int reversal = 0 ;int rem;
        while(x)
        {
            rem = x%10;
            x/=10;
            if(reversal>INT_MAX/10 || reversal<INT_MIN/10)
            return 0;
            reversal = reversal*10 + rem;
        }
        return reversal;
    }
};