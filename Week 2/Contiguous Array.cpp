class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 0) {
                nums[i]=-1;
            }
        }
        vector<int> prefix_sum;
        prefix_sum.push_back(0);
        for(auto i: nums){
            prefix_sum.push_back(i + prefix_sum.back());
        }
        
        unordered_map<int, int> ocur;
        int ans=0;
        for(int i=0; i<prefix_sum.size(); i++){
            if(ocur.find(prefix_sum[i]) != ocur.end()){
                ans = max(ans, i - ocur[prefix_sum[i]]);
            }
            else{
                ocur[prefix_sum[i]] = i;
            }
        }
        return ans;
        
    }
};
