class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<1<<n;i++)
        {
            v.push_back(i^(i/2));
        }
        return v;
    }
};
