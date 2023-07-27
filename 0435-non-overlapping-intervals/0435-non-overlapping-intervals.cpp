class Solution {
public:
 static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
   
    
        sort(intervals.begin(),intervals.end(),cmp);
          for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
               cout<<intervals[i][j]<<" ";
            }
        }
        int prev=0;
        int c=1;
         for(int i=1;i<n;i++){
            if(intervals[i][0]>=intervals[prev][1]){
                c++;
                prev=i;
            }
        }

         
        return n-c;
    }
};