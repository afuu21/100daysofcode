class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long f = LONG_MIN;
        long s = LONG_MIN;
        long t = LONG_MIN;
    for (int n: nums) {
	    if (n == f || n == s || n == t)
		    continue;
	    if (n >= f) {
		    t = s;
		    s = f;
		    f = n;
	    } else if (n >= s) {
		    t = s;
		    s = n;
	    } else if (n >= t) {
		    t = n;
	    }
    }
    if (t != LONG_MIN)
	    return (int)t;
    else if (f != LONG_MIN)
	    return (int)f;
    else
	    return (int)s;
    }
};
