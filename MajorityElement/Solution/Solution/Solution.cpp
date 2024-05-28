class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max, count = 0;
        for (int num : nums) {
            if (count == 0) {
                max = num;
                ++count;
            }
            else if (max == num) ++count;
            else --count;
        }
        count = 0;
        for (int num : nums) {
            if (num == max) ++count;
        }
        if (count > nums.size() / 2) return max;
        return -1;
    }
};