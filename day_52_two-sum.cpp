class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, std::size_t> tmp;
    for (std::size_t i = 0; i < nums.size(); ++i) {
      if (tmp.count(target - nums[i])) {
        return {tmp[target - nums[i]], i};
      }
      tmp[nums[i]] = i;
    }
    return {nums.size(), nums.size()};
    }
};
