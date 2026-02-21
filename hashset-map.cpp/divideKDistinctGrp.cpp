class Solution 
{
public:
    bool partitionArray(vector<int>& nums, int k) 
    {
        // If total number of elements is not divisible by k, partition is impossible
        if (nums.size() % k != 0)
        {
            return false;
        }

        unordered_map<int, int> freq;

        // Count the frequency of each number
        for (int x : nums)
        {
            freq[x]++;
        }

        int numGrps = nums.size() / k; // Maximum allowed occurrences per number

        // Check if any number occurs more than the allowed number of groups
        for (auto& p : freq) 
        {
            if (p.second > numGrps)
            {
                return false;
            }
        }

        // If all numbers satisfy the condition, partition is possible
        return true;
    }
};
