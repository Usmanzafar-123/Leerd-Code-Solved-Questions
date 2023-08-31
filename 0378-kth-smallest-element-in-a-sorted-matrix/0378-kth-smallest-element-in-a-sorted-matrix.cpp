class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        // int i=k%n,j;
        // if(k/n>0){
        //     j=k/n-1;
        // }
        // else{
        //     j=k/n;
        // }
       
        // cout<<i<<" "<<j;
        // return matrix[i][j];
       priority_queue<int>pq;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }

        // while(pq.size()!=2){
        //     pq.pop();
        // }
        return pq.top();
      
      
      
        
    }
};