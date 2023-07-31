class Solution {
public:
    int countLargestGroup(int n) {
        int arr[n];

for(int i=1;i<=n;i++){
    int sum1=0;
   int a=i;
      while(a>0){
            sum1=sum1+a%10;
            a=a/10;
        }
        arr[i-1]=sum1;

}
map<int,int> m;
       for(int i=0;i<n;i++){
           m[arr[i]]++;
       }
       int maxi=INT_MIN;
       for(auto i:m){
           maxi=max(maxi,i.second);
       }
       int b=0;
       for(auto i:m){
           if(maxi==i.second){
               b++;
           }
       }
        return b;
    }
};