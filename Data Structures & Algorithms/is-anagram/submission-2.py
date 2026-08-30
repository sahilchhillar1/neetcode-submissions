class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        char = [0] * 26
        for i in range(len(s)):
            char[ord(s[i]) - ord('a')] += 1

        for i in range(len(t)):
            char[ord(t[i]) - ord('a')] -= 1

        for i in range(26):
            if char[i] != 0:
                return False
        return True
        