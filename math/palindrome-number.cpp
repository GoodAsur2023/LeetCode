class Solution {
public:
    bool isPalindrome(int x) 
    {
        int reversal = 0 ;int rem;
        int num = x;
        if (x<0)
        return 0;
        while(x)
        {
            rem = x%10;
            x/=10;
            if(reversal>INT_MAX/10 || reversal<INT_MIN/10)
                return 0;
            reversal = reversal*10 + rem;
            //return reversal;
        }
        if(reversal==num)
            return 1;
        else
            return 0;
    }
};