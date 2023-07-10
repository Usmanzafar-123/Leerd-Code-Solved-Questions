class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int n=nums.size();
        int arr[100007]={0};
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};