class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1,cnt=0,maxi=0;
        int n=nums.size(),j=0,i;
        for( i=0;i<n;i++){
         if(nums[i]==0){
             k--;
             maxi=max(maxi,i-j+1);
         }
         if(k<0 && nums[j++]==0){
             k++;
             maxi=max(maxi,i-j+1);
         }
        }
       
        return i-j-1;
    }
};