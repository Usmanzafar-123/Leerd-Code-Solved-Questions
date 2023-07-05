class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {


    
        int n=arr.size(),b=0;
       
        int j=0;
        int a[5007]={0};
        for(int i=0;i<n;i++){
            arr[i]=arr[i]+1200;
        }
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        sort(a,a+5007);
        for(int i=0;i<5006;i++){
            if(a[i]==a[i+1] && a[i]!=0){
         b++;
            }
        }

         for(int i=0;i<5006;i++){
            cout<<a[i]<<endl;
        }
        if(b>0){
            return false;
        }
        else{
            return true;
        }
       

        
    }
};