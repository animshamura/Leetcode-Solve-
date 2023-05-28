class Solution {
public:
    double findMedianSortedArrays(vector<int>& s1, vector<int>& s2) {
        int t = s1.size()+s2.size();
        double ar [t];
        auto i = s1.begin();
        auto j = s2.begin();
        for(int k = 0; k < t; k++){
            if(k<s1.size()) ar[k]=*i, i++;
            else ar[k]=*j, j++;
        }
        sort(ar,ar+t);
        if(t%2==1) return (double)ar[t/2];
        else  return (double)(ar[t/2-1]+ar[t/2])/2.00;
    }
};
