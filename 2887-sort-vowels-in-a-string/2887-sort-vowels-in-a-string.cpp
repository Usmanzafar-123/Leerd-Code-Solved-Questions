class Solution {
public:
    string sortVowels(string s) {
        int n=s.length();
        vector<char> v;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='A'){
                v.push_back(s[i]);
            }
            if(s[i]=='e' || s[i]=='E'){
                v.push_back(s[i]);
            }
            if(s[i]=='i' || s[i]=='I'){
                v.push_back(s[i]);
            }
            if(s[i]=='o' || s[i]=='O'){
                v.push_back(s[i]);
            }
            if(s[i]=='u' || s[i]=='U'){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int j=0,i=0;
       while(i<n && j<v.size()){
             if(s[i]=='a' || s[i]=='A'){
                s[i]=v[j];
                j++;
            }
            else if(s[i]=='e' || s[i]=='E'){
                s[i]=v[j];
                j++;
            }
            else if(s[i]=='i' || s[i]=='I'){
                s[i]=v[j];
                j++;
            }
            else if(s[i]=='o' || s[i]=='O'){
                s[i]=v[j];
                j++;
            }
            else if(s[i]=='u' || s[i]=='U'){
                s[i]=v[j];
                j++;
            }
            i++;
        }
        return s;
    }
};