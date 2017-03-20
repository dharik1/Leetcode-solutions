class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(x+y<z)
        {
            return false;
        }
        if(z==x || z==y ||z==x+y)
        {
            return true;
        }
        return z % gcd(x,y) == 0;
    }
private:
    int gcd(int a,int b)
    {
       
        return b==0 ? a:gcd(b,a%b);
    }
};
