class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        for(int x: nums)
            nums[i++] = x*x;
        sort(nums.begin(), nums.end());
        return nums;
    }
};
