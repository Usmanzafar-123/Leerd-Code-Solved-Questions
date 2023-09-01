class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {


          int n=words.size();

        unordered_map<string,int> m;

        for(int i=0;i<n;i++){
            m[words[i]]++;
            
        }

        for(auto i:m){
             cout<<i.first<<" "<<i.second;
        }




      vector<pair<int, string>> pq;

        for(auto i:m){
            pq.push_back({-i.second,i.first});
            // if(pq.size()>k){
            //     pq.pop();
            // }
            // cout<<i.first<<" "<<i.second;
        }
sort(pq.begin(),pq.end());
        vector<string> v;

        for(int i=0;i<k;i++){
            v.push_back(pq[i].second);
            // cout<<pq.top().first<<" "<<pq.top().second;
            

           
        }

         
        return v;

        
    }
};