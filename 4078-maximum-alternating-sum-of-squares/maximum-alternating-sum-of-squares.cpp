class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>squares(n);
      for(int i=0 ; i< n; i++)
squares[i] = (long long )nums[i]* nums[i]; 
sort(squares.begin(), squares.end());

long long score = 0;
        int left = 0, right = n - 1;
        bool add = true; 
        
      
        while (left <= right) {
            if (add) {
                score += squares[right];
                right--;
            } else {
                score -= squares[left];
                left++;
            }
            add = !add; 
        }
        
        return score;
      


    }
};