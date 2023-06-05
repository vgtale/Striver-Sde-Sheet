// TC = O(N)
// SC = O(N)

// The intution is very simple that we will not carry any negative sum with us.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0, ans = INT_MIN;

        for(int i=0; i<nums.size(); i++){

            sum += nums[i];

            ans = max(sum, ans);

            if(sum < 0) sum = 0;
        }

        return ans;
    }
};
