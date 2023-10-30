class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> v;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
           pq.push({nums[i],i});
        }
        while(k--){
            v.push_back({pq.top().second,pq.top().first});
            pq.pop();
        }
        sort(v.begin(),v.end());
        vector<int> v2;
        for(int i=0;i<v.size();i++){
            v2.push_back(v[i].second);
        }
        return v2;
    }
};