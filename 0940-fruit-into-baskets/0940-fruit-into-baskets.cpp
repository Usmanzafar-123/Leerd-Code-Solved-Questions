class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n=f.size(),maxi=INT_MIN;
        unordered_map<int,int> m;

        int i=0,j=0;
        while(i<n && j<n){
              m[f[i]]++;
             if(m.size()>2){
                 m[f[j]]--;
                 if(m[f[j]]==0){
                       m.erase(f[j]);
                 }
               
                j++;
            }
            else if(m.size()<=2){
               
              
                maxi=max(maxi,i-j+1);
                
            }
            i++;
           
        }
        return maxi;
        
    }
};