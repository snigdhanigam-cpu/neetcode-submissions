class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int n = nums.size();

        for (int a = 0; a < n - 3; a++) {

            if (a > 0 && nums[a] == nums[a - 1])
                continue;

            for (int b = a + 1; b < n - 2; b++) {

                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;

                int left = b + 1;
                int right = n - 1;

                while (left < right) {

                    long long sum =
                        (long long)nums[a] +
                        nums[b] +
                        nums[left] +
                        nums[right];

                    if (sum == target) {

                        result.push_back(
                            {nums[a], nums[b],
                             nums[left], nums[right]}
                        );

                        int x = nums[left];
                        int y = nums[right];

                        while (left < right &&
                               nums[left] == x)
                            left++;

                        while (left < right &&
                               nums[right] == y)
                            right--;

                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};