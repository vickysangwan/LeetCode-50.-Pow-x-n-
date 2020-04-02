class Solution {
public:
    double myPow(double x, int n)
    {
        double result=1;
        if(x == 0)
            return 0;

        if(n == 1)
            return x;

        if(n == -1)
            return 1.0/x;

        if(n == 0)
            return 1;

        int m =n/2;
        if(n%2){
            if(n>0)
                return x*myPow(x*x,m);
            else
                return (1.0/x)*myPow(x*x,m);
        }
        else
            return myPow(x*x,m);
    }
};
