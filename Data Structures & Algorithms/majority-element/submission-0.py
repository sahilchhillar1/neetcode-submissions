class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = {}
        for num in nums:
            count[num] = count.get(num, 0) + 1
            if count[num] > math.floor(len(nums)/2):
                return num
        return -1
