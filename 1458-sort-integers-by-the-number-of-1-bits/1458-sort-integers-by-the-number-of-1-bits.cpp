class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>> v;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int a=arr[i];
            int b=0;
            while(a!=0){
                if(a%2!=0){
                    b++;
                }
                a=a/2;
            }
            v.push_back({b,arr[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            v2.push_back(v[i].second);
        }
        return v2;
        
    }
};