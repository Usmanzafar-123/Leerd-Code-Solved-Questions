class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();

        int a=arr[0],n1=0;


         if (k == 1) {
            return max(arr[0], arr[1]);
        }
        if (k >= arr.size()) {
            return *max_element(arr.begin(), arr.end());
        }

        for(int i=1;i<n;i++){
            if(a>arr[i]){
                n1++;
            }
            else{
                n1=1;
                a=arr[i];
            }
            if(k==n1){
                return a;
            }
        }
        
return a;

    }
};