class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        // Find sum of longest sequential PREFIX
        int sum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        // Find smallest missing integer >= sum
        int target = sum;

        while (true) {
            bool found = false;

            for (int i = 0; i < n; i++) {
                if (nums[i] == target) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return target;
            }

            target++;
        }
    }
};