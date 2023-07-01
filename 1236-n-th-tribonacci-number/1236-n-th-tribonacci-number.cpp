class Solution {
    int t(int n,vector<int> &dp){
         if(n==0){
            return 0;
        }
          if(n==1){
            return 1;
        }
          if(n==2){
            return 1;
        }
  if(dp[n]!=-1){
    return dp[n];
  }
        dp[n]= t(n-1,dp)+t(n-2,dp)+t(n-3,dp);
        return dp[n];
    }
 
    
public:
    int tribonacci(int n) {
      vector<int> dp(n+1,-1);
       return t(n,dp);
       
    }
};