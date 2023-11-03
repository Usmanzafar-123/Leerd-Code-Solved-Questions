class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int i=0,j=0;
        vector<string> v1;
        while(i<t.size() && j<v.size()){
            v1.push_back("Push");
           
            
            if(v[j]==t[i]){
                i++;
                j++;
            }
             else if(v[j]!=t[i]){
                v1.push_back("Pop");
                j++;
            }
        }
        return v1;
        
    }
};