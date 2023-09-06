class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        vector<int> v;
       special.push_back(bottom);
        special.push_back(top);
        sort(special.begin(),special.end());
        int maxi=0;
        int n=special.size();

        for(int i=0;i<n-1;i++){
            if(i==0 || i==n-2){
                maxi=max(maxi,special[i+1]-special[i]);
            }
            else{
                 maxi=max(maxi,special[i+1]-special[i]-1);
            }
           
        }
        if(maxi==0){
            return 0;
        }
        return maxi;
       
        
    }
};