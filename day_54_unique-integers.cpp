class Solution {
public:
    vector<int> sumZero(int n) {
        int sum = 0;
        int cnt = 1;
        vector<int> v(n,0);
        for (int i = 0; i < n ; ++i) {
            if (i != n-1) {
                v[i] = cnt;
                sum += v[i];
                cnt++;
            } else {
                v[i] = -sum;
            }
        }
        return v;
    }
