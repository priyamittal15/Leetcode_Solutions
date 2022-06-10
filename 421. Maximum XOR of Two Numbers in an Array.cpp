class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                res[i]=(nums[i])^(nums[j]);
            }
            
        }
       return (*max_element(res.begin(), res.end()));
    }
};
