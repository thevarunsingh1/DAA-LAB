class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        stack<int>st;
       for( char c: s){
        mp[c]++; }
        for(int i=s.size()-1;i>=0;i--){
            if(mp[s[i]]==1)
            st.push(i);
           
        }
         if(st.empty()) return -1;
      return st.top();
    }
};