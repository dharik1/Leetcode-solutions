class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            int l=0,r=numbers.size()-1;
            vector<int> v(2);
            while(l<r)
            {
                if(numbers[l]+numbers[r] == target)
                {
                    v[0]=l+1;
                    v[1]=r+1;
                    return v;
                }
                else if(numbers[l]+numbers[r] < target)
                {
                    l++;
                }
                else{
                    r--;
                }
            }
            return v;
    }
};
