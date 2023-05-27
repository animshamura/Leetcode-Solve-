class Solution {
public:
    int strStr(string h, string n) {
        int c,i,j,ind=-1,s;
        s=h.size()-n.size();
        for(i = 0; i <= s; i++){
             c=0;
            for(j = 0; j <n.size(); j++ ){
                if(h[i+j]==n[j]) c++;
                else break;
            }
            if(c==n.size()){ind=i;break;} 
        }
        return ind;
    }
};
