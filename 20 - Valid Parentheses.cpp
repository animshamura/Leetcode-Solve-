class Solution {
public:
    bool isValid(string s) {
        stack<char> f1;
        char c;
        bool ans = true;
       for(int i = 0; i < s.size(); i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='[' ) f1.push(s[i]);
           else {
               if(f1.size()!=0 && ((s[i]== ')' && f1.top()=='(')  || (s[i]=='}' && f1.top()=='{') || (s[i]==']' && f1.top()=='['))) f1.pop();
               else {ans = false; break; }
       }
       }
       if(f1.size()) ans=false;
       return ans; 

    }
};
