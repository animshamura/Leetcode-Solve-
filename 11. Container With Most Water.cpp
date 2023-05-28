class Solution {
public:
    int maxArea(vector<int>& h) {
        int area=0;
        int st=0;
        int ed=h.size()-1;
        int mh;
        while(st<ed){
            mh = min(h[st],h[ed]);
            area=max(area,mh*(ed-st));
            if(h[st]>h[ed]) ed--;
            else st++;
        }
        return area;
    }
};
