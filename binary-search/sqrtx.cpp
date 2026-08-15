class Solution {
public:
    int mySqrt(int x) 
    {
        int i =1;
        double square_i;
        if(x==0)
        return 0;
        if(x<=3)
        return 1;
        if(x<9)
        return 2;
        while(i<=x/2)
        {
            if(i==46341)
                return 46340;
            square_i = i*i;
            if (square_i > x)
                return --i;
            if (square_i > INT_MAX)
            return 0;
            if(x<square_i)
            break;
            i++;
        }
        return --i;
    }
};