class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double n=arr.size();
        long long freq[100006]={0};

        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
        for(int i=0;i<100006;i++){
            double d;
            d=freq[i]/n;
            if(d>0.25){
                 cout<<d;
                return i;
               
                break;
            }
           
        }
        // for(int i=0;i<10;i++){
        //     cout<<freq[i];
        // }
        cout<<n;
        float r=4/n;
        cout<<r;

return 0;
        
    }
};