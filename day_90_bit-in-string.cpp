class Solution {
public:    
    
    string invert(string x){
        for(int i=0; i<x.size(); i++){
            if(x[i]=='0') x[i] ='1';
            else x[i] ='0';
        }            
        return x;
    }      
    
    string formSequence(int n){
        if(n==0)
            return "0";                
        
        string s = formSequence(n-1);
        string result="";        
        
        // Compute formSequence(n)                
        string rev = invert(s);
        reverse(rev.begin(), rev.end());
        result = s + "1" + rev;
        
        return result;
    }
    
    char findKthBit(int n, int k) {
        string s = formSequence(n);
        return s[k-1];
    }
};
