class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int f,i,m;
        m=accumulate(accounts[0].begin(), accounts[0].end(), 0);
        for(i=1; i< accounts.size(); i++){
        f=accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if(f>m) m=f;
        }
        return m;
    }
};
