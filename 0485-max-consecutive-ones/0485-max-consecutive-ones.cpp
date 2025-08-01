class Solution {
public:   // TC-> O(N) and SC-> O(1)
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(maxi, cnt);
            }
            else{     //when nums[i] == 0
                cnt = 0;
            }
        }
        return maxi;
    }
};