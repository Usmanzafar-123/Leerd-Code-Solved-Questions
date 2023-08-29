class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.length();

        vector<int> v;
        for(int i=0;i<n;i++){
            if(c[i]=='Y'){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
         v.push_back(0);



          vector<int> v1;
        for(int i=0;i<n;i++){
            if(c[i]=='Y'){
                v1.push_back(0);
            }
            else{
                v1.push_back(1);
            }
        }
          v1.push_back(0);

            vector<int> v2;
            v2.push_back(0);
for(int i=0;i<n;i++){
           v2.push_back(v1[i]);
        }

        for(int i=n-2;i>=0;i--){
            v[i]=v[i]+v[i+1];
        }
         for(int i=1;i<n+1;i++){
            v2[i]=v2[i]+v2[i-1];
        }
        
         for(int i=0;i<n+1;i++){
           v[i]=v[i]+v2[i];
        }
        int a=INT_MAX,b;

         for(int i=0;i<n+1;i++){
           cout<<v[i]<<" ";
        }
cout<<endl;
          for(int i=0;i<n+1;i++){
           cout<<v2[i]<<" ";
        }
        


        for(int i=0;i<n+1;i++){
            if(v[i]<a){
                a=v[i];
                b=i;
            }
        }
        return b;
        
    }
};