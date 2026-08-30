class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> vec_set = {};
        for(int num: nums){
            vec_set.insert(num);
        }

        return vec_set.size() != nums.size();
    }
};