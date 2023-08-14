class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int n=nums.size();
       int mini=INT_MAX;

        int i=0,j=0,sum=0;
        // while(i<n && j<n){
           
            
        //         sum=sum+nums[j];
        //        j++;
          
           
            
        //     if(sum>=t){
        //          mini=min(mini,j-i+1);
        //            sum=sum-nums[i];
        //            i++;
        //     }
           
        // }
        for(int j=0;j<n;j++){
            sum=sum+nums[j];
            while(sum>=t){
                mini=min(mini,j-i+1);
                   sum=sum-nums[i];
                   i++;
            }
        }
       
        if(mini!=INT_MAX){
            return mini;
        }
        return 0;
    }
};