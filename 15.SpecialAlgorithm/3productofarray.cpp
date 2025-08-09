//Given an integer array nums, return 
//an array answer such that answer[i] 
//is equal to the product of all the
// elements of nums except nums[i].
//lc - 238      
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prep(nums.size());
        vector<int> sufp(nums.size());
        int p = nums[0];
        prep[0]=1;
        for(int i =1 ;i<nums.size();i++){
            prep[i]=p;
            p *=nums[i];
        }
        p = nums[nums.size()-1];
        sufp[nums.size()-1]=1;
        for(int i =nums.size()-2 ;i>=0;i--){
            sufp[i]=p;
            p*=nums[i];
        }
        for(int i =0 ;i<nums.size();i++){
            nums[i] =prep[i]*sufp[i];
        }
        return nums;
    }
};