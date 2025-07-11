//Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 1;
        int hi = arr.size() - 2;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid; // Peak found
            } else if (arr[mid] > arr[mid - 1]) {
                lo = mid + 1; // Increasing side → go right
            } else {
                hi = mid - 1; // Decreasing side → go left
            }
        }

        return -1; // Should never reach in a valid mountain array
    }
};
