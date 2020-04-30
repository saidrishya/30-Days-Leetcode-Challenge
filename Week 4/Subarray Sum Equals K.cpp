class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), curr_sum=0, res=0;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            curr_sum +=nums[i];
            if(curr_sum == k) res++;
            if(m.find(curr_sum - k) != m.end()) res += m[curr_sum-k];
            m[curr_sum]++;
        }
        return res;
    }
};
