class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans=""; int n=strs.size(); sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1]; int len=min(first.size(),last.size());
      for(int i=0;i<len;i++){
        if(first[i]==last[i]) ans+=first[i];
        else break;
      }
      return ans;
    }
};