class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>st(begin(nums),end(nums));
        int n=nums.size(); int count=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1) count+=nums[i];
            else break;
        }
        while(st.count(count)){
            count++;
        }
return count;
    }
};