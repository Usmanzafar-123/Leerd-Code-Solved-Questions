class Solution {
public:
    int maximumCount(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        int a=0,b=0;
          for(int i=0;i<n;i++){
             if(nums[i]>0){
                a++;
            }
            else if (nums[i]<0){
                b++;
            }
        }
        // for(int i=0;i<n;i++){
        //     m[nums[i]]++;
        // }

        // for(auto i:m){
        //     if(i.first>0){
        //         a++;
        //     }
        //     else if (i.first<0){
        //         b++;
        //     }
        // }
        return max(a,b);
    }
};