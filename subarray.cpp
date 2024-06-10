class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size();
        // declare a hashmap , for finding the subarray of sum k
        // calculate the prefix sum for a particulat element the for task calculationg check how many (x-k) are available
        // while finding (x-k) add them to count store the prefix sum in map with count
        map<int,int> mp;
        mp[0]=1;
        int ps=0,cnt=0;

        for(int i=0;i<n;i++){
            ps+=a[i];
            int remove=ps-k;
            cnt+=mp[remove];
            mp[ps]+=1;            
        }
        return cnt;
    }
};