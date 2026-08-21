class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
          vector<int>first;
          vector<int>second;
                first.push_back(nums[0]);
                second.push_back(nums[1]);
                   for(int i=2; i<n; i++ ){
                            if(first.back()>second.back()) first.push_back(nums[i]);
                            else second.push_back(nums[i]);
                   }
                   for(int i=0;i <second.size(); i++){
                    first.push_back(second[i]);
                   }
                   return first;
    }
};