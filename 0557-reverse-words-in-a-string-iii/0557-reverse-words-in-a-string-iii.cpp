class Solution {
public:
    string reverseWords(string s) {
        
        stack<char>ans;
        int count=0;
        
        string dp;
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=' '){
                ans.push(s[i]);
            }
            
            if(i==s.length()-1){
              if(count==1)  dp+=" ";
                   while(!ans.empty()){
                    dp+=ans.top();
                    ans.pop();
                }
            }
            
            else if (s[i]==' '){
                if(count==1)ans.push(s[i]);
                while(!ans.empty()){
                    dp+=ans.top();
                    ans.pop();
                    count=1;
                }
            }
            
        }
        
     return dp;   
    }
};