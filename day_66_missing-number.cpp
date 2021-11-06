class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x1=0;int x2=0;
        for(int i=0;i<n;i++){
            x1=x1^nums[i]; // let say array is 3,0,1 then x1 will store  3^0^1 
            x2=x2^(i+1);     // here x2 will store 1^2^3
        }
        return x1^x2;
    }
};
