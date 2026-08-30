class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> numMap;
        int i = 0;
            for(int num : nums){
                if(numMap.find(num) != numMap.end()){
                    return true;
                }
                numMap.insert({num, i});
                i++;
            }
            return false;
    }
};