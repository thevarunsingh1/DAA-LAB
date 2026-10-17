class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string>ans; int j=0; 
        for(int i=1; i<=n; i++){
            if(j==target.size()) break;
            st.push(i); ans.push_back("Push");
            if(st.top()== target[j]) {j++; continue; }
            else{ st.pop(); ans.push_back("Pop");
        } 
        }
        return ans;
    }
};