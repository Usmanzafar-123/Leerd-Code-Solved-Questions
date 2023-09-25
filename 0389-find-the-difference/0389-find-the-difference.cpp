class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n1=s.length(),n2=t.length();

        for(int i=0;i<n1;i++){
            if(s[i]!=t[i]){
                return t[i];
                break;
            }
          
        }
          return t[n2-1];
        
    }
};