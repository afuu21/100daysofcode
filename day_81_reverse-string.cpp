class Solution {
public:
    void rev(vector<char>& s, int left, int right)
    {
        if(left>=right)                             // Base Condition
            return;
        swap(s[left++],s[right--]);                 // makes the problem smaller of same type            
        rev(s,left,right);
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);
    }
};
