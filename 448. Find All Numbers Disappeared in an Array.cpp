class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> a(nums.begin(), nums.end());
        vector<int> ans;
        int k = 1;
       for(int i = 1; i <= nums.size(); i++){
            if(!a.contains(k)) ans.push_back(k);
            k++;
        }
        return ans;
    }
};
