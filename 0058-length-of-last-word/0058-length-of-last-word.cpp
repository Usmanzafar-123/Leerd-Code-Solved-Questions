class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1,j=n-1;
        if(n==1) return 1;
       while(j>=0 && s[j]==' '){
           j--;
           i--;
       }
        while(i>=0 && s[i]!=' '){
           
           i--;
       }
        return j-i;
    }
};