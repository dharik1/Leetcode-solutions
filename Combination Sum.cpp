class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> vv;
        return fun(candidates,target,v,0,vv);
    }
    vector<vector<int>> fun(vector<int>& candidates, int target,vector<vector<int>>& v,int i,vector<int>& vv)
    {
        if(target==0)
        {
            v.push_back(vv);
        }
        for(int k=i;k<candidates.size()&&candidates[k]<=target;k++)
        {
            vv.push_back(candidates[k]);
            fun(candidates,target-candidates[k],v,k,vv);
            vv.pop_back();
        }
        return v;
    }
};
