class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n ==1 || k==1 )
        {
            return nums;
        }
        vector<int> ans(n-k+1,-1);
        int len =1;
        for(int i=1;i<n;i++)
        {
            len = (nums[i]==nums[i-1]+1)?len+1:1;
            if(len>=k)
            {
                ans[i-k+1] = nums[i];
            }
        }
        return ans;
    }
};