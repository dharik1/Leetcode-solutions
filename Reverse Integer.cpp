class Solution {
public:
    int reverse(int x) {
        int num=0;
        int rs=0;
        while(x)
        {
            num=num*10+x%10;
            if(((num)/10)!=rs)//check the previous number with updated number for integer overflow
            {
                return 0;
            }
            rs=num;
            x/=10;
        }
        return rs;
    }
};
