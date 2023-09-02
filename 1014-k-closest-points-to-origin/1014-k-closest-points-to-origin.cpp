class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();


        priority_queue<pair<int,pair<int,int>>> pq;

        for(int i=0;i<n;i++){
            int a=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            cout<<a<<" ";
            pq.push({abs(a),{points[i][0],points[i][1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<vector<int>> v;
        while(!pq.empty()){
            v.push_back({pq.top().second.first,pq.top().second.second});
            // cout<<pq.top().second<<" ";
            pq.pop();
        }

        return v;
        
    }
};