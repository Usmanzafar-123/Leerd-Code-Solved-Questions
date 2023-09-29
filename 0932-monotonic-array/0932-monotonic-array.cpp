class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        for(int i=0;i<nums.size();i++){
            nums1.push_back(nums[i]);
             nums2.push_back(nums[i]);
        }

        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
        
        reverse(nums2.begin(),nums2.end());
        if(nums==nums1 || nums==nums2){
            return true;
        }
        return false;
         
    }
};