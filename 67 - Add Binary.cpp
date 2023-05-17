class Solution {
public:
    string addBinary(string num1, string num2) {
       string str1, str2;
       if(num1.size()!=num2.size()){
       str1 = (num1.size() > num2.size())? num1 : num2;
       str2 = (num1.size() < num2.size())? num1 : num2;
       }
       else str1=num1, str2=num2; 
       int k = (num1.size() > num2.size())? num2.size() : num1.size();
       int c = 0,res,ans;
       string reS,bin;
       k--;
       for(int i = str1.size()-1; i >= 0 ; i--){
          if(k >=0)  res = (int)str1[i]+(int)str2[k]+c-96;
          else res = (int)str1[i]+c-48;
          bin = bitset<2>(res).to_string();
          c = bin[0]-48;
          reS=bin[1]+reS;
          k--;
          }
       if(c==1) reS=to_string(c)+reS;
       return reS;
    }
