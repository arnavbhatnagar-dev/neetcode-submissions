class Solution {
   public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        
        std::vector<int> ans;
        for (int i = 1; i <= 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};