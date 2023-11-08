class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack<char> st1;
        stack<char> st2;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st1.push(s[i]);
            }
            else if(s[i]=='*'){
                st2.push(s[i]);
            }
            else{
                if(!st1.empty()){
                    st1.pop();
                }
                else if(!st2.empty()){
                    st2.pop();
                }
                else{
                    return false;
                    break;
                }
            }
        }




         stack<char> st3;
        stack<char> st4;

        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                st3.push(s[i]);
            }
            else if(s[i]=='*'){
                st4.push(s[i]);
            }
            else{
                if(!st3.empty()){
                    st3.pop();
                }
                else if(!st4.empty()){
                    st4.pop();
                }
                else{
                    return false;
                    break;
                }
            }
        }





        // if(st1.size()>st2.size()){
        //     return false; 
        // }
        return true;
        
    }
};