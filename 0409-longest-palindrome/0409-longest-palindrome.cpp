class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;

        }
        int maxi=0,sum=0;
        for(auto i:m){
            if(i.second%2==0){
                sum=sum+i.second;
            }
            else if(i.second%2!=0){
               sum=sum+i.second-1;
               maxi++;
            }
        }
        if(maxi>0){
            return sum+1;
        }
        return sum;

    }
};