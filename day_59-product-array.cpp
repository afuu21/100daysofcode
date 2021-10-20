class Solution {
public:
        vector<int> productExceptSelf(vector<int>& nums) {
        // setting up the necessary variables
        int len = nums.size(), prod = nums[len - 1];
        vector<int> res(len);
        // ruling out an edge case
        if (!len) return res;
        // initialising res and using it for the first pass
        res[0] = 1;
        // each cell will be the product of the previous and the matching previous value in nums
        for (int i = 1; i < len; i++) res[i] = res[i - 1] * nums[i - 1];
        // second pass, from the right
        for (int i = --len - 1; i >= 0; --i) {
            res[i] *= prod;
            prod *= nums[i];
        }
        return res;
    }
    
};
