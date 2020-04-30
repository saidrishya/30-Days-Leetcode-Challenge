class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int res=INT_MIN, sum=0,i=0;
        while(i<nums.size()){
            sum += nums[i];
             res = max(res, sum); 
            if(sum<0){
                sum=0;
            }
            i++;
           
        }
    return res;
    }
};
