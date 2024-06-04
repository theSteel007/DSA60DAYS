class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&a) {
        int n=a.size();
        vector<vector<int>> ans;
            sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;

            if(i>0 and a[i]==a[i-1]) continue; //equivalent to previous go to next step
            while(j<k){
                int sum=a[i]+a[j]+a[k];
                if(sum<0) j++;   //increase j
                else if(sum>0) k--;  // decrease k
                else {    // mil gya triplet

                    vector<int> temp={a[i],a[j],a[k]};
                    ans.push_back(temp);
                    j++;
                    k--;   //as we have got our triplet to change j and k

                    while(j<k and a[j]==a[j-1]) j++;
                    while(j<k and a[k]==a[k+1]) k--;  // if j and k are equivalent to previus ones and we have also got triplet so increase and decrease j and k
                }
            }
        }
        return ans;
    }
};