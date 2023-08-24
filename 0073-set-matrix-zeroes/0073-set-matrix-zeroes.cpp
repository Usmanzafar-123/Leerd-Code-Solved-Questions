class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int n=m.size();
        vector<int> i1;
        vector<int> j1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]==0){
                    i1.push_back(i);
                    j1.push_back(j);


                }
            }
        }
        sort(j1.begin(),j1.end());
          sort(i1.begin(),i1.end());
         
              for(int j=0;j<j1.size();j++){
                    for(int i=0;i<n;i++){
                 
                  m[i][j1[j]]=0;
              }
          }
          cout<<j1.size()<<" "<<i1.size();
    
             for(int j=0;j<m[0].size();j++){
                         for(int i=0;i<i1.size();i++){
                              
                  m[i1[i]][j]=0;
              }
          }

        
    }
};