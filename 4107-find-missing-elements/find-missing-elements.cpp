class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> num;
        sort(nums.begin(), nums.end());

        for (int i =1; i <nums.size(); i++) {

            int missing =nums[i-1] + 1;
                    while(missing<nums[i]){
                        num.push_back(missing);
                        missing++;
                    }
        }

    return num;
}
};