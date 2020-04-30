class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> prodleft(nums.size() , 1);
    vector<int> prodright(nums.size(), 1);
        vector<int> res(nums.size());
    
    for(int i=1; i<nums.size();i++)
        prodleft[i] = prodleft[i-1]*nums[i-1];
    
      for(int i=nums.size()-2;i>=0;i--)
        prodright[i] = prodright[i+1]*nums[i+1];
        
     for(int i=0; i<nums.size();i++)
        res[i] = prodleft[i]*prodright[i];
        
        
    return res;
    }
};
