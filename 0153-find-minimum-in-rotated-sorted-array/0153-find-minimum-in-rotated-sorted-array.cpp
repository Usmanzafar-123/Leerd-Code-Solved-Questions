class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int lo=0,hi=n-1,mid;
        while(lo<hi){
           
            if(nums[lo]<nums[hi]){
                return nums[lo];
                break;
            }
             mid=(lo)+(hi-lo)/2;
            if(nums[lo]<=nums[mid]){
                lo=mid+1;
            }
            else{
                hi=mid;
            }

        }
        return nums[lo];
        
    }
};