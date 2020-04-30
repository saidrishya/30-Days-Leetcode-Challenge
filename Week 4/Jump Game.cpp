class Solution {
    public boolean canJump(int[] nums) {
        if(nums == null || nums.length == 0) return false;
        int n=nums.length;
        int farthest=0;
        
        for(int i=0; i<n; i++){
            if(i>farthest || farthest >= n-1) break;
            farthest = Math.max(farthest, i+nums[i]);
        }
    return farthest>=n-1;
    }
}
