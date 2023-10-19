class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();

        stack<char> st1;
        stack<char> st2;
        vector<char> v1;
         vector<char> v2;

        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                st1.push(s[i]);
            }
            else if(!st1.empty()){
                st1.pop();
            }
        }

        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                st2.push(t[i]);
            }
            else if(!st2.empty()){
                st2.pop();
            }
        }

        while(!st1.empty()){
            v1.push_back(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            v2.push_back(st2.top());
            st2.pop();
        }
         reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        
        if(v1==v2){
            return true;
        }
        return false;

    }
};