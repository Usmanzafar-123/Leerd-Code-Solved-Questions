class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int b=0;

        for(int i=0;i<=n;i++){
            b==0;
            int a=i;
            if(a==0){
                v.push_back(0);
            }
            else{
                b=0;
                while(a>0){
                    if(a%2!=0){
                        b++;
                        a=a/2;
                    }
                      else if(a%2==0){
                        a=a/2;
                    }
                    else if(a==1){
                        b++;
                        a=a/2;
                        
                    }
                  
                }
                v.push_back(b);
            }

        }

        return v;
        
    }
};