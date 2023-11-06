class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        int l=v.size();
        
        for(int i=0;i<v.size();i++){
            if(v[i].first<=k){
                k=k-v[i].first;
                l--;
            }
        }
        return l;
    }
};