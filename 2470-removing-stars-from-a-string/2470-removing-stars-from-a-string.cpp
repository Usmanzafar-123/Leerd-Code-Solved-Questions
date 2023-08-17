class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
          if(s[i]!='*'){
                st.push(s[i]);
            }
           if(s[i]=='*'){
                st.pop();
            }
        }
       cout<<st.size();
         int a=st.size();
         string res = "";
        
         while(a--){
         res.push_back(st.top());
             st.pop();
             
         }

        reverse(res.begin(), res.end());
        
        
        return res ;

        
    }
};