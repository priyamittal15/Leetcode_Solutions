class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    for(int i=0, countZero=0; i<nums.size(); i++){
            if(nums[i] == 0){
                countZero++; 
                continue;
            }
            else if(countZero > 0)
            {
                nums[i - countZero] = nums[i]; 
                nums[i] = 0; 
            }
        }
    }
};

