class Solution {
public:
    int beautySum(string s) {
       int n=s.length();
       int sum=0;
     


        

        for(int i=0;i<n;i++){
               unordered_map<char,int> m;
           
            for(int j=i;j<n;j++){
                m[s[j]]++;

                  int a=0,b=INT_MAX;
                for(auto l:m){
                   a=max(a,l.second);
                   b=min(b,l.second);
                }
                
                 sum=sum+(a-b);
               
               
            }
            
        }
      
        return sum;
    }
};