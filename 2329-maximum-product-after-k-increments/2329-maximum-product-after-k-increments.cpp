class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
         priority_queue <int, vector<int>, greater<int> > pq; 
         for(int i=0;i<nums.size();i++){
             pq.push(nums[i]);
         }
int mod = 1e9+7;
         while(k--){
            int  a=pq.top();
             pq.pop();
             a++;
             pq.push(a);
         }
         long long b=1;
         while(!pq.empty()){
             b=(b*pq.top())%mod;
             pq.pop();
         }
         return b%mod;
    }
};