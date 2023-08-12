class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
    //    int vs=nums.size();
    //     if(vs==0)
    //         return-1;
    //     int st=0,kl;
    //     int et=vs-1;
    //     while(st<=et)
    //     {
    //         int middle=(st+et)/2;
    //         if(nums[middle]==target)
    //             return middle;
    //         else if(nums[middle]>target)
    //             et=middle-1;
    //         else if(nums[middle]<target)
    //             st=middle+1;
    //             else{
    //                 kl=middle;
    //             }
    //     }
    //    return kl;

    // int n=nums.size();
    // int lo=0,hi=n-1,mid;
    // while(hi-lo>0){
    //     mid=(hi+lo)/2;
    //     if(nums[mid]<x){
    //         lo=mid+1;
    //     }
    //     else{
    //         hi=mid;
    //     }
    // }
    // if(nums[lo]>=x){
        
    //     return lo;
    // }
    //  if(nums[hi]>=x){
        
    //     return hi;
    // }
    
// return n;
int n=nums.size();
vector<int>::iterator lower, upper;
 upper = lower_bound(nums.begin(), nums.end(), x);
return upper-nums.begin();



    }
};