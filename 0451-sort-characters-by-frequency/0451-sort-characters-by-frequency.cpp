class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();

        map<char,int> m;

        for(int i=0;i<n;i++){
            m[s[i]]++;
        }




        priority_queue<pair<int,int>> pq;

        for(auto i:m){
            pq.push({i.second,i.first});
        }

        string s1="";

        int a;
        while(!pq.empty()){
            a=pq.top().first;
            while(a--){
                s1.push_back(pq.top().second);
            }
            pq.pop();
        }

        return s1;


    }
};