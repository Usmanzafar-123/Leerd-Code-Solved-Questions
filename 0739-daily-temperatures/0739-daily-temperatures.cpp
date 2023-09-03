class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();

        vector<int> v;
      stack<pair<int,int>> st;
      ;
    

      for(int i=n-1;i>=0;i--){
          while(!st.empty() && st.top().first<=t[i]){
              st.pop();
          }
          if(st.empty()){
              v.push_back(0);
          }
          else {
              v.push_back(st.top().second-i);
          }
          st.push({t[i],i});
      }
reverse(v.begin(),v.end());
         
        return v;
        
    }
};