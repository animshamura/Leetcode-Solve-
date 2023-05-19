class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator i,j;
        vector<int> ans;
        bool found = false;
        int i1 = 0,i2; 
        for(i=nums.begin(); i < nums.end(); i++){
              i2=i1+1;
              for(j=i+1; j < nums.end(); j++){
              if(*i+*j==target){
                  ans.push_back(i1);
                  ans.push_back(i2);
                  found = true;
                  break;
              }
              i2++;
              }
              if(found) break;
              i1++;
        }
        return ans;
    }
};
