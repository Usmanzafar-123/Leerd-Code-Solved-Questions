class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        for(int i=0;i<n;i++){
            m1[nums[i]]++;
        }
        int sum=0,a=m1.size();

      
        int i=0,j=0;
        while(i<n && j<n){
            m2[nums[i]]++;
           
                // while(m2.size()>a){
                   
                // }
                while(m2.size()==m1.size()){
                    sum+=n-i;
                    m2[nums[j]]--;
                     if(m2[nums[j]]==0){
                        m2.erase(nums[j]);
                    }
                    
                    

                    j++;
                    
                }
                 
            i++;
        }
        return sum;
        
    }
};