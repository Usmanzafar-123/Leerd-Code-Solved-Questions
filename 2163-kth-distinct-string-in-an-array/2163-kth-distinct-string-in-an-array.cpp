class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      
        int n=arr.size();
        unordered_map<string,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }

        // for(auto i:m){
        //     if(i.second==1){
        //           k--;
               
        //         if(k==0){
        //              cout<<m[arr[0]];
        //             return i.first;
        //             break;
                     
        //         }
              
               
        //     }
        // }

     for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==1){
                k--;
                if(k==0)return arr[i];
            }
        }
        for(int i=0;i<m.size();i++){
            cout<<m[arr[i]];
        }
        return "";
        
    }
};