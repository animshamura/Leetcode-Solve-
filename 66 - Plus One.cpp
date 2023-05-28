class Solution {
 public:
  vector<int> plusOne(vector<int>& d) {
    int i;
       for( i = d.size()-1; i >=0; i--) 
           if(d[i]<9) {d[i]++; break;}
           else d[i]=0;
       if(i==-1) d.insert(begin(d),1);
       return d;
    }
};
