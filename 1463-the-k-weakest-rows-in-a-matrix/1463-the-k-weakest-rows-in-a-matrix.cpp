class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++){
            int a=0;
            for(int j=0;j<mat[i].size();j++){
                a+=mat[i][j];
            }
            v.push_back({a,i});
        }

        sort(v.begin(),v.end());
         vector<int> v1;
         for(int i=0;i<k;i++){
             v1.push_back(v[i].second);
         }

         return v1;

        
    }
};