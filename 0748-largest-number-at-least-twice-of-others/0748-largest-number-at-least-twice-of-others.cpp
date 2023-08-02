class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size(),maxi=INT_MIN;
        int b=0,a;


        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                a=i;
            }
        }

        for(int i=0;i<n;i++){
            if(2*nums[i]<=maxi){
                b++;
            }
        }
        if(b==n-1){
            return a;
        }
        return -1;
        
    }
};