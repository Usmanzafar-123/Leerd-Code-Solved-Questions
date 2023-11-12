class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=max(x,y);
        int b=min(x,y);
        vector<int> v1;
        vector<int> v2;
        int c=0;
        while(a!=0){
            if(a%2==1){
                v1.push_back(1);
                a=a/2;
            }
            else{
                 v1.push_back(0);
                a=a/2;
            }
             if(b%2==1){
                v2.push_back(1);
                b=b/2;
            }
            else{
                 v2.push_back(0);
                b=b/2;
            }
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                c++;
            }
        }


        return c;
        
    }
};