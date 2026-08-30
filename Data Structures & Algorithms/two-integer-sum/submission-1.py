class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numDict = {}
        for i, num in enumerate(nums):
            comp = target - nums[i]
            if comp in numDict:
                return sorted([i, numDict[comp]])
            numDict[nums[i]] = i
        return [-1,-1]
        