class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int index, int value) {
        int n=nums.size();
        vector<int> v1;

        int mini=0;
        int maxi=0;

        for(int i=index;i<n;i++){
            if(nums[i-index]<nums[mini]){
                mini=i-index;
            }
            if(nums[i-index]>nums[maxi]){
                maxi=i-index;
            }
            if(abs(nums[i]-nums[maxi])>=value){
                v1.push_back(i);
                v1.push_back(maxi);
                return v1;
            }
            if(abs(nums[i]-nums[mini])>=value){
                v1.push_back(i);
                v1.push_back(mini);
                return v1;
            }
        }
           v1.push_back(-1);
                v1.push_back(-1);
                return v1;   
    }
};