class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1=sum1+nums[i];
        }

        for(int i=0;i<n;i++){
             while(nums[i]>0){
           sum2=sum2+nums[i]%10;
           nums[i]=nums[i]/10;
       }
        }





// string s1="";
//  for(int i=0;i<n;i++){
//            string s = to_string(nums[i]);
//            s1=s1+s;
//         }
//         int n1=s1.length();
//         int a=stoi(s1);
//        while(a>0){
//            sum2=sum2+a%10;
//            a=a/10;
//        }
       return abs(sum1-sum2);
        
    }
};