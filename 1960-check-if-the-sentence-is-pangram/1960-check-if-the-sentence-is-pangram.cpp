class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        if(m.size()==26){
            return true;
        }
        return false;

        
    }
};