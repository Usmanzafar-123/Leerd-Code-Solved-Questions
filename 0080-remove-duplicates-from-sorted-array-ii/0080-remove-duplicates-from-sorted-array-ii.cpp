class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),b=0;
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second==1){
                v.push_back(i.first);
            }
            else if(i.second>=2){
                v.push_back(i.first);
                v.push_back(i.first);

            }
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
            cout<<v[i]<<" ";
        }
    //    stack<int> st;
    //    st.push(nums[0]);
    //    for(int i=1;i<n;i++){
          
    //        if(nums[i]==st.top()){
              
    //            b++;
    //        }
          
    //        if(b<2){
    //             st.push(nums[i]);
    //        }
    //         if(b==2){
    //            b=0;

    //        }

    //    }
    //    vector<int> v2;
    //    while(!st.empty()){
    //        v2.push_back(st.top());
    //        st.pop();
    //    }
    //    reverse(v2.begin(),v2.end());
    // for(int i=0;i<v2.size();i++)
    // cout<<v2[i]<<" ";

    return v.size();
    }
};