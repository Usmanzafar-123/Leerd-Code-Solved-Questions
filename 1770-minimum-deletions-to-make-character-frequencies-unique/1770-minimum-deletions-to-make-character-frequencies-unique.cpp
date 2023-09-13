class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int sum=0;
       vector<int> v;
        for(auto i:m){
            v.push_back(i.second);

        }
        int n1=v.size();
        priority_queue<int> pq;
        for(int i=0;i<n1;i++){
            pq.push(v[i]);
        }
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            // cout<<a<<" ";
           
            if( !pq.empty() && a==pq.top()){
                // pq.pop();
                a--;
                sum++;
                if(a!=0){

                pq.push(a);
                }
            }
        //    cout<<pq.size()<<endl;
                    
            
        }
return sum;
        
    }
};