class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();


         priority_queue<pair<int,pair<int,int>>> pq;
         

        for(int i=0;i<n1;i++){
             
            for(int j=0;j<n2;j++){
                int sum = nums1[i]+nums2[j];
               
               if(pq.size()<k){
                    pq.push({sum,{nums1[i],nums2[j]}});
                  
                }
                else if(sum<pq.top().first){
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});

                }
                else {
                    break;
                }

            }
           
           
          
        }
        
          vector<vector<int>> v3;
         while(!pq.empty()){
             v3.push_back({pq.top().second.first, pq.top().second.second});
             pq.pop();
         }


        return v3;
    }
};