class Solution {
    public:
    int firstBadVersion(int n) {
        long long int b,l,m;
        b = 1 , l = n;
        long int p = 1;
        while(b<=l){
            m = b + (l-b)/2;
            bool x = isBadVersion(m);
            if(x == true){
                p= m;
                l = m-1;
            }
            else b = m+1;
        }

        return p;
    }
};
