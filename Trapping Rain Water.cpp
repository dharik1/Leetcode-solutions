class Solution {
public:
    int trap(vector<int>& h) {
        int qt=0;
            int ma=0,mb=0,l=0,r=h.size()-1;
           while(l<=r)
           {
             ma=max(ma,h[l]);
             mb=max(mb,h[r]);
             qt+=(ma>mb)?mb-h[r--]:ma-h[l++];
           }
        return qt;
    }
};
