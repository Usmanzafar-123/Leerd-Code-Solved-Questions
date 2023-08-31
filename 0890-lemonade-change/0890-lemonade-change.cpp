class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int a=0,b=0,c=0;

        for(int i=0;i<n;i++){
            if(bills[i]==5){
                a++;
            }
            if(bills[i]==10){
                if(a==0){
                    return false;
                    break;
                }
                else{
                    a--;
                    b++;
                }
            }
            if(bills[i]==20){
                if(a==0){
                    return false;
                    break;
                }
                else if(b==0){
                    if(a<3){
                         return false;
                    break;
                    }
                    else{
                        a=a-3;
                        c++;
                    }

                }
                else{
                    a--;
                    b--;
                    c++;
                }
            }
        }

        return true;


         
        
    }
};