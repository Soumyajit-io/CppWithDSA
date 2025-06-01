//  Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        
    }
