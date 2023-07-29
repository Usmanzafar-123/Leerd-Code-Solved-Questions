class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map< char, int > m1;
         unordered_map< char, int > m2;
        int n1=s.length();

        // for(int i=0;i<n1;i++){
        //  m1[s[i]]++;
        // }
        //  for(int i=0;i<n1;i++){
        //  m2[t[i]]++;
        // }
    //    if(m1.size()!=m2.size()){
    //        return false;
    //    }
       
           for(int i=0;i<n1;i++){
               if(m1[s[i]]!=m2[t[i]]){
                   return false;
               }
               m1[s[i]]=m2[t[i]]=i+1;
            
           }
       
       cout<<m1.size()<<m1[1];
       return true;
        
    }
};