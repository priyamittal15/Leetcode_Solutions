class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0;
        int b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             if (i%2==0)
        {
            a = max(a+nums[i], b);
        }
        else
        {
            b = max(a, b+nums[i]);
    }
        }
        return max(a,b);
    }
};
