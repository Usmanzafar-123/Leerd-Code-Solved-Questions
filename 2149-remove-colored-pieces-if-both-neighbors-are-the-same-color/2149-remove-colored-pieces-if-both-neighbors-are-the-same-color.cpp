class Solution {
public:
    bool winnerOfGame(string c) {
        int n=c.length();
        int a=0,b=0;

        if(n<3){
            return false;
        }

        int i=0,j=1,k=2;
        while(i<n && j<n && k<n){
            if(c[i]=='A' && c[j]=='A' && c[k]=='A'){
                a++;
            }
            if(c[i]=='B' && c[j]=='B' && c[k]=='B'){
                b++;
            }
            i++;
            j++;
            k++;
        }
        if(a<=b){
            return false;
        }
        return true;
        
    }
};