class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        auto i = find(n.begin(), n.end(),t);
        if(i!=n.end()) return i-n.begin();
        else {
         n.push_back(t);
         sort(n.begin(),n.end());
         auto j = find(n.begin(), n.end(),t);
         return j-n.begin();
        }

    }
}
