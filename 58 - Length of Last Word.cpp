class Solution {
public:
    int lengthOfLastWord(string s) {
       bool found = false;
       int len = 0;
       for(int i = s.size()-1; i >=0; i--){
           if(found && s[i]==' ') break;
           else if(s[i]!=' ') {
            found = true;
            len++;
           }
       }
       return len;
    }
};
