class Solution {
public:
    bool areNumbersAscending(string s) {
       bool ans = true;
        bool found = false;
        int prev;
        int post;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
            string num = "00";
            for(; i < s.size() && isdigit(s[i]);i++) num+=s[i];
            if(found){
                post=stoi(num);
                if(prev >= post) ans = false;
                prev = post;
                }
                else {
                    prev=stoi(num);
                    found = true;
                }
                } 
            if(!ans) break;
        }
    return ans;
    }
};
