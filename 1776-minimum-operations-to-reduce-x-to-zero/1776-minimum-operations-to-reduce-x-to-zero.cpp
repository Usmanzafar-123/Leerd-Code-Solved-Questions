class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0,maxi=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum==x){
            return n;
        }
        int sum1=sum-x;
        int i=0,j=0,sum2=0;
        while(i<n && j<n){
            
                sum2+=nums[j];
                
            
            
           while(j>i && sum2>sum1){
                
                 sum2-=nums[i];
                i++;
            }
             if(sum2==sum1){
                maxi=max(maxi,j-i+1);

                 cout<<i<<" "<<j<<sum1<<" "<<sum2; 

                //  sum2+=nums[j];
                // j++;
               
               
            }
            j++;
        }
        if(maxi==-1){
            return -1;
        }
        return n-maxi;
        
    }
};