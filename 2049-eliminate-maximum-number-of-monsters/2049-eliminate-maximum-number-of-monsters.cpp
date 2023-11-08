class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        int a=0;
        vector<double> v;
        for(int i=0;i<n;i++){
            v.push_back((double)dist[i]/(double)speed[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
           if(v[i]<=i){
                return a;
                break;
            }
           
                a++;
          
        }
        return a;
        
    }
};