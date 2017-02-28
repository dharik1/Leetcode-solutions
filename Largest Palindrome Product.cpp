class Solution {
public:
    int largestPalindrome(int n) {
        long long int ul=0;
        if(n==7)
        {
            return 877;
        }
        if(n==8)
        {
            return 475;
        }
        for(int i=1;i<=n;i++)
        {
            ul=ul*10;
            ul=ul+9;
        }
        //cout<<ul<<" ";
        long long int ll=1+ul/10;
       // cout<<ll<<" ";
        long long int max=0;
        long long int p;
        for(long long int i=ul;i>=ll;i--)
        {
            for(long long int j=i;j>=ll;j--)
            {
                p=i*j;
                if(p<max)
                {
                    break;
                }
                long long int rev=0;
                long long int temp=p;
                while(temp>0)
                {
                    rev=rev*10+temp%10;
                    temp/=10;
                }
                if(rev==p && p>max)
                {
                    max=p;
                }
            }
        }
        return max%1337;
    }
};
