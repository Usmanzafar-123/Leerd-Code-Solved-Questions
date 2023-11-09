class Solution {
public:
    int countHomogenous(string s) {
        int i=0,j=0,sum=0;
        int a=0;
        int n=s.length();
        while(i<n && j<n){
            if(s[i]==s[j]){
                // j++;
                a++;
                j++;
            }
            else if(s[i]!=s[j]) {
            
                sum+=((1ll*a*(a+1))/2)%1000000007;
                i=j;
                cout<<a<<endl;
                a=0;
            }

        }
        sum+=((1ll*a*(a+1)%1000000007)/2)%1000000007;
        return sum%1000000007;
    }
};