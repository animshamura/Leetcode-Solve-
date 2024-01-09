class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int n,p;
        for(char c : t){
          n=count(s.begin(), s.end(),c);
          p=count(t.begin(), t.end(),c);
          if(n!=p) ans =c;
        }
        return ans;
    }

};
