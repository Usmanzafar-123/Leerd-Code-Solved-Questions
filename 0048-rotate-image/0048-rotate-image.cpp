class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();

        vector<vector<int>> v;

        for(int i=0;i<n;i++){
            vector<int> v1;
            for(int j=n-1;j>=0;j--){
                v1.push_back(m[j][i]);
            }
                v.push_back(v1);
                v1.clear();
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[i][j]=v[i][j];
            }
        }


        
    }
};