string reverseVowels(string s) {
     string ans,p; 
     string v ="AEIOUaeiou";
     
     for(char i : s){
         int n = v.find(i);
         if(n>=0 && n<= v.length()) p+=i;
     }
     reverse(p.begin(), p.end());
     int k = 0; 
     for(int i = 0; i < s.length(); i++){
          int n = v.find(s[i]);
         if(n>=0 && n<= v.length()) s[i]=p[k++];
     }
     return s;
    }
