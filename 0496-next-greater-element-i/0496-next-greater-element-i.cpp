class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        vector<int> v;
        int a;
        for(int i=0;i<n1;i++){
            a=100000;
            for(int j=0;j<n2;j++){
               
                
            
                if(nums1[i]==nums2[j]){
                   a=j;
                
            }
                if(nums1[i]<nums2[j] && j>a){
                    v.push_back(nums2[j]);
                    break;
                }
                else if( j==n2-1){
                    v.push_back(-1);
                     break;
                }
            }
        }
        return v;
        
    }
};