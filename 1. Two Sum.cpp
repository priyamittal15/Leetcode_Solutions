class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
                if(nums[i]+nums[j]==target){
                 // res.clear();
                  res.push_back(i);
                  res.push_back(j);  
                }
            }
        }
        return res;
    }
};
