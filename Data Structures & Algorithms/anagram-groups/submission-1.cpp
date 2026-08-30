class Solution {
public:
    bool validAnagram(string s, string t){
        int arr[26] = {0};
        for(char ch: s){
            arr[ch - 'a']++;
        }

        for(char ch: t){
            arr[ch - 'a']--;
        }

        for(int i=0; i<26; i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams2(vector<string>& strs) {
        vector<vector<string>> result = {};
        bool isVisited[strs.size()];

        for(int i=0; i<strs.size(); i++){
            if(!isVisited[i]){
                string s = strs[i];
                vector<string> temp = {s};
                isVisited[i] = true;
                for(int j=i+1; j<strs.size(); j++){
                    if(s.size() == strs[j].size()){
                        if(validAnagram(s, strs[j])){
                            temp.push_back(strs[j]);
                            isVisited[j] = true;
                        }
                    }
                }
                result.push_back(temp);
            }
        }

        return result;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs){
        unordered_map<string, vector<string>> groups;
        
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); 
            groups[key].push_back(s); 
        }
        
        vector<vector<string>> result;
        for (auto& [key, group] : groups) {
            result.push_back(group);
        }
        
        return result;
    }
};
