class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int j=0; unordered_set<int>mp;

        for(int i=0;i<nums.size();i++){
           if(i-j>k){
            mp.erase(nums[j]);
            j++;
           }
           if(mp.count(nums[i]))
                  return true;

mp.insert(nums[i]);
            
        }
return false;
    }
};