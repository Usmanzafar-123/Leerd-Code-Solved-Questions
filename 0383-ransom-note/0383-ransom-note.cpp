class Solution {
public:
    bool canConstruct(string r, string m) {
        sort( r.begin(), r.end());
         sort( m.begin(), m.end());
        // if( magazine.find(ransomNote) != string::npos){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int n=r.length();
        int o=m.length();
        int i=0,j=0,k=0;
        while(i<n && j<o){
           if(r[i]==m[j]){
                i++;
                j++;
                k++;
            }
           else if(r[i]!=m[j]){
               
                j++;
            }

        }
        if(k==n){
            return true;
        }
        return false;
    }
};