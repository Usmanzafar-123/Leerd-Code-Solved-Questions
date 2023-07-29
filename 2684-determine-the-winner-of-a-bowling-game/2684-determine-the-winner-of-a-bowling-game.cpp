class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int n1=p1.size();
         int n2=p2.size();
        int sum1=0,sum2=0,a=1,b=1;

        for(int i=0;i<n1;i++){
          if(i==0){
              sum1=sum1+p1[i];
              sum2=sum2+p2[i];
          }
          else{
              if(i==1){
                  if(p1[i-1]==10){
                      sum1=sum1+2*p1[i];
                  }
                  else{
                      sum1=sum1+p1[i];
                  }
                   if(p2[i-1]==10){
                      sum2=sum2+2*p2[i];
                  }
                  else{
                      sum2=sum2+p2[i];
                  }
                  
              }
              else{
                   if(p1[i - 1] == 10 || p1[i - 2] == 10){
                       sum1=sum1+2*p1[i];
                   }
                    else {
                        sum1=sum1+p1[i];
                    }
                   
                    if(p2[i - 1] == 10 || p2[i - 2] == 10){
                         sum2=sum2+2*p2[i];
                    }
                    
                    else{
                         sum2=sum2+p2[i];
                    }
              }
          }
        }




        if(sum1>sum2){
            return 1;
        }
        else if(sum1<sum2){
            return 2;
        }
        return 0;
    }
};