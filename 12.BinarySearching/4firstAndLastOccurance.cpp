//Find First and Last Position of Element in Sorted Array

#include<iostream>
#include<vector>

using namespace std;

int first(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int x = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                if (mid > 0 && nums[mid - 1] == target) {
                    hi = mid - 1;
                } else {
                    x = mid;
                    break;
                }
            } else if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return x;
    }

int second(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int y = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (nums[mid] == target) {
                if (mid < nums.size() - 1 && nums[mid + 1] == target) {
                    lo = mid + 1;
                } 
                else {
                    y = mid;
                    break;
                }
            } 

            else if (nums[mid] > target) {
                hi = mid - 1;
            } 
            else {
                lo = mid + 1;
            }
        }
        return y;
}
int main(){
    int x = first(nums, target);
    int y = second(nums, target);
    return {x, y};
    
    }
