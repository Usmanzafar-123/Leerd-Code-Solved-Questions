class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();

       priority_queue<int> pq;
       map<int,int> m;
       for(int i=0;i<n;i++){
           m[nums[i]]++;
       }
       for(auto i:m){
           pq.push(i.first);
       }

       int maxi=1,a=1;
       if(n==0){
           return 0;
       }

       while(!pq.empty()){
           int b=pq.top();
           pq.pop();
           if(b-pq.top()==1){
               a++;
               maxi=max(maxi,a);
           }
           else{
               a=1;
           }
       }
return maxi;
        
    }
};