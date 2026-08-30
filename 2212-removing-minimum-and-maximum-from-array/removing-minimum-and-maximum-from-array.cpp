class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) {
            return 1;
        }

        int minIdx = 0;
        int maxIdx = 0;

        for(int i = 1; i < n; i++) {

            if(nums[i] > nums[maxIdx]) {
                maxIdx = i;
            }

            if(nums[i] < nums[minIdx]) {
                minIdx = i;
            }
        }

        int leftmax = maxIdx + 1;
        int rightmax = n - maxIdx;

        int leftmin = minIdx + 1;
        int rightmin = n - minIdx;

        bool leftmax1 = false;
        bool rightmax1 = false;
        bool leftmin1 = false;
        bool rightmin1 = false;

        int ans1 = 0;
        int ans2 = 0;

        if(leftmax > rightmax) {
            ans1 = rightmax;
            rightmax1 = true;
        } 
        else {
            ans1 = leftmax;
            leftmax1 = true;
        }

        if(leftmin > rightmin) {
            ans2 = rightmin;
            rightmin1 = true;
        } 
        else {
            ans2 = leftmin;
            leftmin1 = true;
        }

       

       int ans = min({
    max(leftmax, leftmin),
    max(rightmax, rightmin),
    leftmax + rightmin,
    rightmax + leftmin
});

return ans;
    }
};