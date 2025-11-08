import java.util.Arrays;
class Solution {
    int solution(int a, int b, int c, int d) {
        int[] nums = {a, b, c, d};

        Arrays.sort(nums);

         if (nums[0] == nums[3]) return 1111 * a;
            else if (nums[0] == nums[2] || nums[1] == nums[3]) {
                int p = (nums[1] == nums[3]) ? nums[1] : nums[0];
                int q = (nums[1] == nums[3]) ? nums[0] : nums[3];
                return (10 * p + q) * (10 * p + q);
            }
            else if (nums[0] == nums[1] && nums[2] == nums[3]) return  (nums[0] + nums[2]) * (nums[2] - nums[0]);
            else if (nums[0] == nums[1]) return nums[2] * nums[3];
            else if (nums[1] == nums[2]) return nums[0] * nums[3];
            else if (nums[2] == nums[3]) return nums[0] * nums[1];
            else return nums[0];
    }
}