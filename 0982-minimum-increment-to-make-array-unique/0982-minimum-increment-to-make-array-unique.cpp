class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
          priority_queue <int, vector<int>, greater<int> > pq; 
           int d=0;
           sort(nums.begin(),nums.end());
          for(int i=1;i<nums.size();i++){
              if(nums[i]<=nums[i-1]){
d=d+abs(nums[i]-nums[i-1])+1;
              nums[i]=nums[i]+abs(nums[i]-nums[i-1])+1;
              }
              
          }
         

        //   while(pq.size()!=1){
        //       int a=pq.top();
        //       pq.pop();
        //       if(a==pq.top()){
        //           a++;
                  
        //             d++;
        //         //   pq.push(a);
        //       }
              
          
          return d;
    }  
};