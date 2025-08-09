//Given an array nums. We define a running sum of an 
//array as runningSum[i] = sum(nums[0]…nums[i]).
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i = 0 ;
        int j=1;
        while(j<nums.size()){
            nums[j++]+=nums[i++];
        }
        return nums;
    }
};

