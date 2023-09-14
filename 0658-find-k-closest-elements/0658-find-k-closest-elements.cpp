class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();

        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            v.push_back({abs(x-arr[i]),arr[i]});
        }

        sort(v.begin(),v.end());
        vector <int> v1;
        for(int i=0;i<k;i++){
            v1.push_back(v[i].second);
        }
         sort(v1.begin(),v1.end());
        // reverse(v1.begin(),v1.end());

        // priority_queue<pair<int,int>> pq;
        // for(int i=0;i<n;i++){
        //     pq.push(v[i]);
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }

        // vector<int> v1;
        // while(!pq.empty()){
        //     v1.push_back(pq.top().second);
        //     pq.pop();
        // }
        return v1;
        
    }
};