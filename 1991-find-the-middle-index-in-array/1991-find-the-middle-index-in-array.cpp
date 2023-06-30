class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        for(int i=0;i<n;i++){
            if(i==0){
                pre[i]=nums[0];
            }
            else{
                pre[i]=nums[i]+pre[i-1];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                suf[i]=nums[n-1];
            }
            else{
                suf[i]=nums[i]+suf[i+1];
            }
        }
        for(int i=0;i<n;i++){
            if(suf[i]-pre[i]==0){
                return i;
            }
        }
        return -1;
    }
};