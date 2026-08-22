class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string st="";
        for(int i=0; i<s.size(); i++){
            if(s[i]!= ' '){
                st+=s[i];
            }
            else if(st !="") {a.push_back(st); st="";
            }
        }
 if(st!= "" ) a.push_back(st);
reverse(a.begin(),a.end());
       string ans="";
for(int i=0; i<a.size();i ++ ){
ans+=a[i];
ans+=" ";

}
ans.pop_back();

return ans;
    }
};