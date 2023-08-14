class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int id=n-1;
       for(int i=n-1;i>=0;i--){
           if(nums[i]+i>=id){
               id=i;
           }
       }
       if(id==0){
           return true;
       }
        return false;
    }
};