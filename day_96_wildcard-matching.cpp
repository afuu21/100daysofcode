class Solution {
public:
    bool isMatch(string s, string p) {
        return isMatch(0,0,s,p);    
    }
    bool isMatch(int i, int j, string& s, string& p) {
        int sn = s.size();
        if(j==p.size()) return i==sn;
        if(p[j]=='*') return isMatch(i,j+1,s,p) || (i<sn && isMatch(i+1,j,s,p));
        if(i<sn && (p[j]=='?'|| s[i]==p[j])) return isMatch(i+1,j+1,s,p);
        return 0;
    }
};
