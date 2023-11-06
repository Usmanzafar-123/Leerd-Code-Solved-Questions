class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(start+2*i);
        }
int c=0;
        for(int i=0;i<n;i++){
            c=c^v[i];
        }
        return c;

    }
};