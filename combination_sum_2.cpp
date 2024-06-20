class Solution {
public:

    void f(int ind,vector<int>&candidates,int t,vector<int>&ds,vector<vector<int>>&ans){
        if(t==0){
            ans.push_back(ds);
            return;
        }

        //we want to pick elements like which one to choose whether its 0th,1st,2nd,......nth, soo we gonna use a loop for that
        for(int i=ind;i<candidates.size();i++){
            //suppose if duplicate elements present and we choose of the them then next one is oe use as it will create same subset so avoid it
            if(i>ind and candidates[i]==candidates[i-1]) continue;
            if(t<candidates[i]) break;

                ds.push_back(candidates[i]);
                f(i+1,candidates,t-candidates[i],ds,ans);
                ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int t) {
          sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int ind=0;
        f(ind,candidates,t,ds,ans);
        return ans;
    }
};