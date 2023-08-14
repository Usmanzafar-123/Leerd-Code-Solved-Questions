class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       int arr[n];
       int j=0;
       for(int i=n-k%n;i<n;i++){
           arr[j]=nums[i];
           j++;
       }
       for(int i=0;i<n-k%n;i++){
           arr[j]=nums[i];
           j++;
       }
       for(int i=0;i<n;i++){
           nums[i]=arr[i];
       }


        
    }
};