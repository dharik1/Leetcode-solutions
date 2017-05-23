class Solution {
public:
vector<string> s;
    vector<string> generateParenthesis(int n) {
        //string ss;
        
        fun(n,n,"");
        return s;
    }
    void fun(int left,int right,string ss)
    {
        if(left==0 && right==0)
        {
            s.push_back(ss);
            return;
        }
        
        if(left>0)
        {
            fun(left-1,right,ss+'(');
        }
        if(right>left)
        {
            fun(left,right-1,ss+')');
        }
    }
};
