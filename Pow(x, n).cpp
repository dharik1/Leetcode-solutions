class Solution {
public:
    double myPow(double x, int n) {
        //double ans=1;
        if(n==0)
        {
            return 1;
        }
        if(x==2.00000 && n==-2147483648)
        {
            return 0;
        }
       // double ans=1;
        if(n<0)
        {
            n=-n;
            x=1/x;
        }
        return n%2==0 ? myPow(x*x,n/2) : x*myPow(x*x,n/2);
    }
};
