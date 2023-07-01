class Solution {

    int c(int n,vector<int> &dp){
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]= c(n-1,dp)+c(n-2,dp);
        return dp[n];
    }

    int d(int n){
        int a=1;
        int b=2;
         if(n==1){
            return a;
        }
        if(n==2){
            return b;
        }
        int c=0;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
    //    return c(n,dp);
       return d(n);
    }
};