class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i: nums)
        {
            mp[i]++;
        }
        int maxim = 0;
        for(auto [k,v]: mp)
        {
            maxim = max(maxim,v);
        }
        int cnt = 0;
        for(auto [k,v]: mp)
        {
            if(maxim == v)  cnt++;
        }
        return cnt*maxim;
    }
};