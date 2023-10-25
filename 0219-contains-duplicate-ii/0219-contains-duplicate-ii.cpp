class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;

        int i=0,j=0;
        while(i<n && j<n){
            m[nums[j]]++;
            
            if(abs(j-i)>k){
                cout<<j-i<<" "<<j<<" "<<i<<n<<endl;
                if(m[nums[i]]==0){
                    m.erase(m[nums[i]]);
                    i++;
                }
                else{
                    m[nums[i]]--;
                    i++;
                }
            }
            if(m[nums[j]]>=2){
                return true;
            }
            j++;
        }

      
        return false;
    }
};