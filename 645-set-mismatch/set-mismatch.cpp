class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1, missing = -1;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && nums[i] == nums[i + 1]) {
                duplicate = nums[i];
            }
        }
        
       
        vector<int> count(n + 1, 0);
        for (int x : nums) {
            count[x]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) duplicate = i;
            if (count[i] == 0) missing = i;
        }
        
        return {duplicate, missing};
    }
};