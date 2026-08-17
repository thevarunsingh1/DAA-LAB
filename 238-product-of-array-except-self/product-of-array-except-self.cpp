class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(); 
        vector<int>leftArr(n); 
        vector<int>rightArr(n);
        vector<int>ans(n);int left=1; int right =1;
        for(int i=0; i<n; i++){
            leftArr[i]=left;
            left*=nums[i];
        }
   
          for(int i=n-1; i>=0; i--){
            rightArr[i]=right;
            right*=nums[i]; }

  for(int i=0; i<n; i++){
    ans[i]=leftArr[i]*=rightArr[i];
  }
  return ans;
    
    }
};