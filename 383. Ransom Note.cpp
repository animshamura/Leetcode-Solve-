class Solution {
public:
   bool canConstruct(string r, string m) {
     set<char> ans(r.begin(), r.end());
     for(auto i : ans){
         int n1 = count(r.begin(), r.end(), i);
         int n2 = count(m.begin(), m.end(), i);
         if(n1>n2) return false;
     }
     return true;
    }
};
