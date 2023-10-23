class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        long long a=(n*(n-1))/2,b=0;
        map<int,int> m;

        for(int i=0;i<n;i++){
           nums[i]=nums[i]-i;
        }
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            long long c=i.second;
            b=b+(c*(c-1))/2;
        }
       
        return a-b;
        
    }
};