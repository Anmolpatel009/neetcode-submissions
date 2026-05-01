// Static block to speed up I/O before the solution even runs
auto fastIO = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;

        // Use a raw array for zero-overhead lookup
        int seen[128];
        // Using memset or a simple loop to initialize is faster than vector constructor
        for(int i = 0; i < 128; i++) seen[i] = -1;

        int left = 0;
        int maxlength = 0;

        for (int i = 0; i < n; i++) {
            uint8_t curr = (uint8_t)s[i]; // Cast to unsigned to avoid negative index issues

            if (seen[curr] >= left) {
                left = seen[curr] + 1;
            }

            seen[curr] = i;
            // Branchless max: some compilers optimize this better than std::max
            int wins = i - left + 1;
            if (wins > maxlength) maxlength = wins;
        }

        return maxlength;
    }
};
/*
Memory Alignment: By using int seen[128], you are using exactly 512 bytes.
Branch Prediction: Using if (wins > maxlength) instead of std::max.
: By removing the vector, you avoid a call to the OS to request memory.

*/
