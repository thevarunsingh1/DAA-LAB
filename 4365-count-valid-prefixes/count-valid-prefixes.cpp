class Solution {
public:
    int countValidPrefixes(string s) {
        int count0=0;
        int count1=0;
        int prefix=0;
        for(auto c: s){
        if(c=='0') count0++;
        else count1++;
        if(abs(count0-count1)<=1) prefix++;
        }
        return prefix;
    }
};