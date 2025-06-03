//m1--------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size()/2;
        
        for(int i=0;i<nums.size();i++){
            int count=0;
            int val=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                    val =nums[i];
                }
            }
            if(count>n) return val;
            
        }
        return 0;
    }
};


//m2-----------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size()/2;
        sort(nums.begin(),nums.end());
       
        return nums[n];
    }
};