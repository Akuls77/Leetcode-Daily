class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // TC-> O(log2 N) and SC-> O(1)
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};