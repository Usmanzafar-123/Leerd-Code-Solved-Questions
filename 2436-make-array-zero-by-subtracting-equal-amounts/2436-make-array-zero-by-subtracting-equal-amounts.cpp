class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();

         priority_queue<int,vector<int>,greater<int>>pq;
         for(int i=0;i<n;i++){
             pq.push(nums[i]);
         }
        //  sort(nums.begin(),nums.end());
         int m=0,c=0;

      
         

          while(!pq.empty()){
             auto t=pq.top();
              pq.pop();
              if(t>c)
              {
                  c+=t-c;
                  m++;
              }
          }
             

         
         return m;
    }
};