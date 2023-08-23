class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
long long n=nums.size();
       
  long long sum=0;
  priority_queue<int> pq;

  for(int i=0;i<n;i++){
      pq.push(nums[i]);
  }

  while(k--){
      sum=sum+pq.top();
      int a;
      if(pq.top()%3==0){
          a=pq.top()/3;
      }
      else{
            a=1+pq.top()/3;
      }
    
      pq.pop();
      pq.push(a);

  }
        return sum;
        
    }
};