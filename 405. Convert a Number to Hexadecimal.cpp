class Solution {
public:
    string toHex(int num) {
        char hex[30];
        sprintf(hex, "%x", num); 
        return hex;
    }
};
