class Solution {
public:
    int partitionString(string s) {
        int n=s.length();
        unordered_map<char,int> m;
        int c=1;
        int i=0;
        while(i<n){
            m[s[i]]++;
            if(m[s[i]]>=2){
                m.clear();
                m[s[i]]++;
                c++;
            }
            i++;
        }
        return c;
    }
};