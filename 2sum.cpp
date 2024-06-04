class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n=a.size();
        vector<int> v(2);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a1=a[i];
            int rem=k-a1;
            if(mp.find(rem)!=mp.end()){ //checking the remaining element is present in map or not
                v[0]=i;
                v[1]=mp[rem];
                break;
            }
            mp[a1]=i; //indexinng and storing the element in map
        }
        
        return v;
    }
};