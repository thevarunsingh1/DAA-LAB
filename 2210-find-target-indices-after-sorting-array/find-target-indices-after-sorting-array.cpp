class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int lessThan = 0;
        int count = 0;
       
        for(int num : nums) {
            if(num < target) {
                lessThan++;
            } else if(num == target) {
                count++;
            }
        }
        
       
        vector<int> result(count);
        
        iota(result.begin(), result.end(), lessThan);
        
        return result;
    }
};