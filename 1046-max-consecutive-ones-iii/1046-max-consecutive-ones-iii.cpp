class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        

         int n=nums.size();
        int cnt=0,j=0,m=k,i;
        for( i=0;i<n;i++){
         if(nums[i]==0){
             k--;
         }
         if(k<0 && nums[j++]==0){
             k++;
             
         }
        }
       
        return i-j;
    }
};