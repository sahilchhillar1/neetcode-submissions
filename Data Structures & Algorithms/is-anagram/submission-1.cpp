class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]{};

        // insertion
        for(char ch: s){
            arr[ch - 'a']++;
        }

        // deletion
        for(char ch: t){
            arr[ch - 'a']--;
        }

        // traverse array
        for(int i=0; i<26; i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }
    
    bool isAnagram2(string s, string t) {
        unordered_map<char, int> anagram_map = {};
        for(char ch: s){
            if(anagram_map.find(ch) != anagram_map.end()){
                anagram_map[ch]++;
            }else{
                anagram_map[ch] = 1;
            }
        }

        for(char ch: t){
            if(anagram_map.find(ch) != anagram_map.end()){
                anagram_map[ch]--;
            }else{
                return false;
            }
        }

        for (auto const& [key, val] : anagram_map){
            if(val != 0) return false;
        }
        return true;
    }
};
