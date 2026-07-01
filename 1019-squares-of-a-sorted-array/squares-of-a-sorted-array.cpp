class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int l=0;int r =n-1;int k=n-1;

        while(l<=r){
int lsq=nums[l]*nums[l];
int rsq=nums[r]*nums[r];
if(lsq>rsq){
    ans[k]=lsq; l++;
}
else{ ans[k]=rsq;
   r--;}  
   k-- ;}
   return ans;
    }
};