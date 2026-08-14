class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int >mp;
        int mxLen=0; int left=0;
        for(int right=0; right<s.length(); right++){
            mp[s[right]]++;
            
            while(mp[s[right]]>2){
                mp[s[left]]--;
                left++;
            }
mxLen=max(mxLen, right-left+1);
        }
        return mxLen;
    }
};