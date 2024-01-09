class Solution {
public:
    int firstUniqChar(string s) {
        set<char> st(s.begin(),s.end());
        int ind = -1;
        bool f = false;
        for(char c : st){
            if(count(s.begin(), s.end(),c)==1){
             if(f)  ind = (ind > s.find(c))? s.find(c):ind;
             else {
                 f= true;
                 ind= s.find(c);
             }
            }
        }
        return ind;
    }
};
