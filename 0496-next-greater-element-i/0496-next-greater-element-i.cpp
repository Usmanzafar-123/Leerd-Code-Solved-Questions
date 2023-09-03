class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
       vector<int> v;
       stack<int> st;
       map<int,int> m;
       
       for(int i=n2-1;i>=0;i--){
           while(!st.empty() && st.top()<=nums2[i]){
               st.pop();
           }
           if(st.empty()){
               m[nums2[i]]=-1;
           }
           else{
               m[nums2[i]]=st.top();
           }
           st.push(nums2[i]);
       }

       for(int i=0;i<n1;i++){
           if(m.find(nums1[i])!=m.end()){
               v.push_back(m[nums1[i]]);
           }
       }
        return v;
    }
};