class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;s[i];i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else{
                if(st.empty())
                {
                    return 0;
                }
                else if((s[i]=='}' && st.top()=='{')||(s[i]==')' && st.top()=='(')||(s[i]==']' && st.top()=='['))
                {
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
        if(!st.empty())
        {
            return 0;
        }
        return 1;
    }
};
