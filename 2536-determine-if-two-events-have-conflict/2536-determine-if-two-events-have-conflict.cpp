class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        string s1="";
        string s2="";
        string s3="";
        string s4="";
        
        s1=s1+event1[1][0]+event1[1][1]+event1[1][3]+event1[1][4];
        s2=s2+event2[0][0]+event2[0][1]+event2[0][3]+event2[0][4];
        s3=s3+event1[0][0]+event1[0][1]+event1[0][3]+event1[0][4];
         s4=s4+event2[1][0]+event2[1][1]+event2[1][3]+event2[1][4];

        cout<<s1<<s2;

        int a=stoi(s1);
        int b=stoi(s2);
          int c=stoi(s3);
           int d=stoi(s4);
        if(a>b && c>d || b>a && d>a){
            return false;
        }
        return true;
    }
};