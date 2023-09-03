class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int n=p.size();

        stack<int> st;

        vector<int> v;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()>p[i]){
                  st.pop();
            }
            if(st.empty()){
                 v.push_back(p[i]);
            }
            else{
               
                 v.push_back(p[i]-st.top());
            }
            st.push(p[i]);

        }
        reverse(v.begin(),v.end());
        return v;
    }
};