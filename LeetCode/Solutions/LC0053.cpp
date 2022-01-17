/*
Problem Statement:https://leetcode.com/problems/maximum-subarray/
Author:Selvaraj Kuppusamy github.com/selvaraj-kuppusamy
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int cur_sum=0;
        int pre_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           cur_sum=pre_sum+nums[i];
           ans=max(ans,cur_sum);
           pre_sum=max(cur_sum,0);
        }
        return ans;
    }
};
