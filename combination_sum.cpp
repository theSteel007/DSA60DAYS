class Solution {
public:
    void f(vector<int>&a,int t,int index,vector<int>&ds,vector<vector<int>> &ans){
        //base case
        if(index==a.size()){
            if(t==0) ans.push_back(ds);
            return;
        }
        //picking the elements
        if(a[index]<=t){
            ds.push_back(a[index]);
            f(a,t-a[index],index,ds,ans);
            ds.pop_back();
        }

        //avoid the element, move to next index
            f(a,t,index+1,ds,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<int> ds;
        vector<vector<int>> ans;
        int ind=0;
        f(a,t,ind,ds,ans);
        return ans;

    }
};