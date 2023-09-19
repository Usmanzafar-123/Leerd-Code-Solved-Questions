class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s1;
        for(int j=0;j<nums.size();j++){
            while (nums[j]%2 == 0){
      s1.insert(2);
      nums[j] = nums[j]/2;
   }
   for (int i = 3; i <= sqrt(nums[j]); i = i+2){
      while (nums[j]%i == 0){
         s1.insert(i);
         nums[j] = nums[j]/i;
      }
   }
   if (nums[j] > 2)
   s1.insert(nums[j]);
        }
        return s1.size();
    }
};