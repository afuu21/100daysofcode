class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=-1,max2=-1;
        for(auto i: nums){
        auto temp = max(i , min(max1,max2));
        max2 = max(max1,max2);
        max1=temp;
        }
      return (max1-1)*(max2-1);
    }
};
