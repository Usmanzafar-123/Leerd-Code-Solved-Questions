class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
      for(int i=0;i<n;i++){
          if(nums[i]%2==0){
              nums[i]=0;
          }
          else{
              nums[i]=1;
          }


      }
      unordered_map<int,int> m;
      int sum=0,c=0;

      for(int i=0;i<n;i++){
          sum=sum+nums[i];
          if(sum==k){
              c++;
          }
          if(m.find(sum-k)!=m.end()){
              c=c+m[sum-k];
               
          }
          m[sum]++;

         


      }
      return c;
        }
};