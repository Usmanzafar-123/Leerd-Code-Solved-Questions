class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>1){
                return i.first;
                break;
            }
        }
        return 0;
    }
};