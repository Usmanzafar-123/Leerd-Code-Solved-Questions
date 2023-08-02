class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int b=0;
        for(int i=0;i<n;i++){
           
            if(arr[i]%2==1){
                b++;
            }
             if(arr[i]%2==0){
                b=0;
            }
             if(b==3){
                return true;
                break;
            }
        }
        cout<<b;
        return false;
        
    }
};