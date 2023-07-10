class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n1=g.size(),n2=s.size(),a=0;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(g[i]<=s[j]){
                i++;
                j++;
                a++;
            }
            else{
                j++;
            }
        }
        return a;
    }
};