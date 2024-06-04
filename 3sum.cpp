class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&a) {
        int n=a.size();
        set<vector<int>> st; //to store the triplets

        for(int i=0;i<n;i++){
            set<int> s; //declared st here as every time its empty when we are putting the j th element
            for(int j=i+1;j<n;j++){
                int third=-(a[i]+a[j]);
                if(s.find(third)!=s.end()){
                    vector<int> temp={a[i],a[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                s.insert(a[j]);//for indexing in  2nd set for check third element
            }
        }
            vector<vector<int>> ans(st.begin(),st.end());
            return ans;
    }
};