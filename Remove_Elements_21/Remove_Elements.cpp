#include <iostream>
#include <vector>

class Solution {
public: 
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 2, 2, 3}; 
    int result = solution.removeElement(nums, 3);
    std::cout << "Nouveau k : " << result << std::endl; // Correction de std::cout
    return 0;
}
