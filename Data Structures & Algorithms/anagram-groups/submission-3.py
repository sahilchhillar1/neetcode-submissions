class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sorted_str = [" "] * len(strs)

        for i, str in enumerate(strs):
            sorted_str[i] = ''.join(sorted(str))

        res = {}
        for i, str in enumerate(sorted_str):
            if str not in res:
                res[str] = [strs[i]]
            else:
                res[str].append(strs[i])
        return list(res.values())

        