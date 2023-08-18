class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.length();
         int n2=word2.length();
         if(n1!=n2){
             return false;
         }
         sort(word1.begin(),word1.end());
         sort(word2.begin(),word2.end());

         map<char,int> m1;
         map<char,int> m2;
         for(int i=0;i<n1;i++){
             m1[word1[i]]++;
         }
         for(int i=0;i<n2;i++){
             m2[word2[i]]++;
         }
         int s1=m1.size();
         int s2=m2.size();
         if(s1!=s2){
             return false;
         }
        // int a1[s1];
        //  int a2[s2];
        //  int j=0;
        //  for(auto i:m1){
        //      a1[j]=i.second;
        //      j++;
        //  }
        //  int k=0;
        //  for(auto i:m2){
        //      a2[k]=i.second;
        //      k++;
        //  }
        //  sort(a1,a1+s1);
        //  sort(a2,a2+s2);
        //  for(int i=0;i<s2;i++){
        //      if(a1[i]!=a2[i]){
        //          return false;
        //          break;
        //      }
        //  }

       vector<char> v1;
       vector<char> v2;
       vector<char> v3;
       vector<char> v4;
       for(auto i:m1){
           v1.push_back(i.first);
            v3.push_back(i.second);
       }
       for(auto i:m2){
           v2.push_back(i.first);
            v4.push_back(i.second);
       }
sort(v3.begin(),v3.end());
sort(v4.begin(),v4.end());
                for(int i=0;i<s1;i++){
                    if(v1[i]!=v2[i]){
                        return false;
                    }
                    
                    
                }
                for(int i=0;i<s2;i++){
                    if(v3[i]!=v4[i]){
                        return false;
                    }
                }
            
        
         return true;

         



        
    }
};