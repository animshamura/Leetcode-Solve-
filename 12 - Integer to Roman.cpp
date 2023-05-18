class Solution {
public:
    int romanToInt(string s) {
        string cont = "IVXLCDM";
        int val []= {1,5,10,50,100,500,1000};
        int ans = 0;
        int p1, p2;
        p1=cont.find(s[s.size()-1]);
        ans+=val[p1];
        for(int i = s.size() -2 ; i >= 0;i--){
         p2=cont.find(s[i]);
         if(p2<p1) ans-=val[p2];
         else ans+=val[p2];
         p1=p2;
        }
        return ans;
    }
};
