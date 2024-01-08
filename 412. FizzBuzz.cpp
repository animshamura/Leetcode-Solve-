class Solution {
public:
    vector<string> fizzBuzz(int i) {
    vector <string> vec;
     for(int n = 1; n<=i; n++){
         if(n%3==0 && n%5==0) vec.push_back("FizzBuzz");
         else if(n%3==0 && n%5!=0) vec.push_back("Fizz");
         else if(n%5==0 && n%3!=0) vec.push_back("Buzz");
         else vec.push_back(to_string(n));
     }
     return vec;
    }
};
