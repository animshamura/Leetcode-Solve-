class Solution {
public:
    string addStrings(string num1, string num2) {
       string str1, str2;
       if(num1.size()!=num2.size()){
       str1 = (num1.size() > num2.size())? num1 : num2;
       str2 = (num1.size() < num2.size())? num1 : num2;
       }
       else str1=num1, str2=num2; 
       int k = (num1.size() > num2.size())? num2.size() : num1.size();
       int c = 0,res,ans;
       string reS;
       k--;
       for(int i = str1.size()-1; i >= 0 ; i--){
          if(k >=0) {
           res = (int)str1[i]+(int)str2[k]+c-96;
           ans = res%10;
           c = res/10;
          }
          else {
           res = (int)str1[i]+c-48;
           ans = res%10;
           c = res/10;
          }
          reS=to_string(ans)+reS;
           k--;
       }
       if(c==1) reS=to_string(c)+reS;
       return reS;
    }
};