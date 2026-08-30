class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }

        vector<vector<int>> count(nums.size()+1);
        for(auto& val: freq){
            count[val.second].push_back(val.first);
        }

        // for(int i=0; i<count.size(); i++){
        //     cout<<i;
        //     for(int j=0; j<count[i].size(); j++){
        //         cout<<count[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }

        vector<int> res;
        for(int i=count.size()-1; i>=0; i--){
            if(k == 0) break;
            if(!count[i].empty()){
                for(int j=0; j<count[i].size() && k > 0; j++){
                    res.push_back(count[i][j]);
                    k--;
                }
            }
        }

        return res;
    }
};
