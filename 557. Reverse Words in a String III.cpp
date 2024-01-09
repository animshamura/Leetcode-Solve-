class Solution {
public:
    string reverseWords(string s) {
        string k;
        string ans;
        for(char c : s){
            if(c==' ' && k.length()){
            reverse(k.begin(),k.end());
            k+=c;
            ans+=k;
            k.erase();
            }
            else k+=c;
        }
        reverse(k.begin(),k.end());
        ans+=k;
        return ans;
    }
};
