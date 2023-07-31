class Solution {
public:
    int countEven(int num) {
        int arr[num];


        for(int i=1;i<=num;i++){
            int a=i;
            int sum=0;
            while(a>0){
                sum=sum+a%10;
                a=a/10;

            }
            arr[i-1]=sum;
        }
        int b=0;
        for(int i=0;i<num;i++){
            if(arr[i]%2==0){
                b++;
            }
        }
        return b;

        
        
    }
};