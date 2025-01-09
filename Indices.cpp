#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store number and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {}; // Should not reach here as exactly one solution exists
}

int main() {
    // Example usage
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}

The output of the code for the input nums = [2, 7, 11, 15] and target = 9 is [0, 1]. 
