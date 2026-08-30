class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int num : nums){
            s.insert(num);
        }

        return s.size() != nums.size();
    }
};