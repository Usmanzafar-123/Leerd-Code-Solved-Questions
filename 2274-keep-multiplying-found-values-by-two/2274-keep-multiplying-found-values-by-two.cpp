class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==o){
                o=2*o;
                i=-1;
            }
        }
        return o;
        
    }
};