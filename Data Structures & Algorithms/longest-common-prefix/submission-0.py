class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for i in range(len(strs[0])):
            char = strs[0][i]
            for j in range(1, len(strs)):
                str = strs[j]
                if len(str) <= i or str[i] != char:
                    return res
            res += char
        return res
        