class Solution {
public:
    int maximumSwap(int nums) {
        
        vector<int> v1;
        vector<int> v2;

        while(nums!=0){
            v1.push_back(nums%10);
            v2.push_back(nums%10);
            nums=nums/10;
        }
        reverse(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                int a=v1[i];
                int b=v2[i];
                v1[i]=v2[i];
                cout<<v1[i]<<" ";
                for(int j=v1.size()-1;j>=i+1;j--){
                    if(v1[j]==v1[i]){
                        v1[j]=a;
                        cout<<v1[j]<<endl;;
                        break;
                    }
                }
                break;
               
            }
            
        }
        // reverse(v1.begin(),v1.end());
        int sum=0;
        for(int i=0;i<v1.size();i++){
           sum=(sum+v1[i])*10;
        }
        return sum/10;;
        
    }
};