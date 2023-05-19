class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>:: iterator i;
        set<int> ans;
        for(i=nums.begin(); i < nums.end(); i++) ans.insert(*i);
        auto k=ans.begin();
        for(auto j=nums.begin(); k!=ans.end(); j++) {
            *j=*k;
             k++;
        }
        return ans.size();
    }
};
