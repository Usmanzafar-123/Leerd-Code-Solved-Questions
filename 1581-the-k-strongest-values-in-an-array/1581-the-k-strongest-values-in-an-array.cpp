class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int m=arr[(n-1)/2];
        vector<pair<int,int>> vp;

        for(int i=0;i<n;i++){
            vp.push_back({abs(arr[i]-m),arr[i]});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        vector<int> v;
        for(int i=0;i<k;i++){
            v.push_back(vp[i].second);
        }
        
        return v;
        
    }
};