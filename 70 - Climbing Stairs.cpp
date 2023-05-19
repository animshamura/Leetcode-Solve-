class Solution {
public:
    int climbStairs(int n) {
       int step1 = 1, step2 = 1;
       for(int i = 2; i <=n; i++){
           int temp = step1+ step2;
           step1 = step2;
           step2= temp;
       }
       return step2;
    }
}; 
