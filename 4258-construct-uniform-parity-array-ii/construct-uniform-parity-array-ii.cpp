class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mnOdd = INT_MAX;

        // Find the smallest odd number
        for (int x : nums1) {
            if (x % 2 == 1) {
                mnOdd = min(mnOdd, x);
            }
        }

        // Check if any even number is smaller than the smallest odd
        for (int x : nums1) {
            if (x % 2 == 0 && mnOdd != INT_MAX && x < mnOdd) {
                return false;
            }
        }

        return true;
    }
};