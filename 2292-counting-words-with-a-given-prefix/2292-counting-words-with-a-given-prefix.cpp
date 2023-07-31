class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {

        int n=words.size();
        int m=pref.size();
        int b=0;

        for(int i=0;i<n;i++){
        //    int p=0;
        //    int k;
        //    while((k = words.find(pref, position)) != string::npos){
        //        p=k;
        //    }
        //    if(p==0){
        //        b++;
        //    }

        for(int j=0;j<m;j++){
            if(words[i][j]!=pref[j]){
                break;
            }
            if(j==m-1){
                b++;
            }

        }
       
        }
        return b;
    }
};