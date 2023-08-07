class Solution {
public:
    long long rangeSum(vector< int>& nums, long long n, long long left, long long right) {
       
        vector< int> v;
          int mod = 1e9 + 7;
        int sum=0;
       


 for(int i=0;i<n;i++)
        {
            sum = 0;    // prefix sum
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());

        int sum1=0;
        // cout<<v.size();
        

        for(long long i=left-1;i<right;i++){
            sum1=(sum1+v[i])%mod;
        }
        return sum1;
        
    }
};