class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<int,int> m;
        if(n<3){
            return 0;
        }
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        if(m.size()>2){
            cout<<m.size();
            return n-m[nums[0]]-m[nums[n-1]];
        }
        return 0;
        
    }
};