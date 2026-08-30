class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}

        for i, str in enumerate(strs):
            x = ''.join(sorted(str))
            if x not in res:
                res[x] = [str]
            else:
                res[x].append(str)
        return list(res.values())

        