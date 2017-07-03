class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int pg=0;
        //Its a favourite interview puzzle 
        //basically we increase power of two untill its closer to given n(values)
        //but here the time to test and the time to die is act as 2(two) here
        while(pow((minutesToTest/minutesToDie+1),pg) < buckets)
        {
            pg+=1;
        }
        return pg;
    }
};
