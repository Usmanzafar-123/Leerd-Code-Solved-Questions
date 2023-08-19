class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        

        int n=nums.size(),mid=INT_MAX,left=INT_MAX,k=1;
        
             for(int i=0;i<n;i++){
           
               if(nums[i]>mid){
                   return true;
               }
               else if(nums[i]>left && nums[i]<mid){
                   mid=nums[i];
               }
               else if (nums[i]<left){
                   left=nums[i];
               }
                    
                    
                
            
            }
        
        
       
        
        return false;
    }
};