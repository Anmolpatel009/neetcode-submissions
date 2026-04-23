#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Reality check: If array is 0 or 1, no duplicates possible
        if (nums.size() < 2) return false;

        unordered_set<int> unique;
        // Optimization: Pre-reserve memory to avoid O(n) rehashing spikes
        unique.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            // Check if current number is already in our set
            if (unique.find(nums[i]) != unique.end()) {
                return true; // Found a duplicate
            }
            // Add the current number to the set for future checks
            unique.insert(nums[i]);
        }

        return false; // Finished loop, no duplicates found
    }
};