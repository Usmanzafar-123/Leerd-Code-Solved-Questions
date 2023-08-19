class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        

        int n=nums.size(),b=INT_MAX,a=INT_MAX,k=1;
        
             for(int i=0;i<n;i++){
           
               if(nums[i]<=a){
                   a=nums[i];
               }
               else if(nums[i]<=b){
                   b=nums[i];
               }
               else{
                   return true;
               }
                    
                    
                
            
            }
        
        
       
        
        return false;
    }
};