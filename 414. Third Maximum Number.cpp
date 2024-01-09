class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        set<int>::reverse_iterator i;
        int k = 0,max;
        for(i = st.rbegin(); i != st.rend(); i++){
            if(k==3) break;
            max = *i;
            k++;
        }
        if(st.size()<=2) max = *st.rbegin();
        return max;
    }
};
