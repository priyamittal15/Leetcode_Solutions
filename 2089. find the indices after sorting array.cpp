class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> sort;
        int a;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    a=nums[i];
                    nums[i]=nums[j];
                    nums[j]=a;

                }

                  }



        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                b.push_back(i);
            }
        }

       return b;
    }
};
