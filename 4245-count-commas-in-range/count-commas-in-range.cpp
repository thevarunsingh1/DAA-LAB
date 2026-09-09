class Solution {
public:
    int countCommas(int n) {
    long long  count=0; 
        while(n>=1000){ n--; count ++; }
   return count;
    }
};