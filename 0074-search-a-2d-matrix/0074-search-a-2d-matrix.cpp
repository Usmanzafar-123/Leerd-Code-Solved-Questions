class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int lo=0,hi=(m*n)-1;

        while(lo<=hi){
            int mid=lo-((lo-hi)/2);
            int row=mid/n;
            int col=mid%n;
            if(mat[row][col]==target){
                return true;
            }
            else if(mat[row][col]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return false;
    }
};