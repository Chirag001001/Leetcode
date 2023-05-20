from itertools import permutations

class Solution(object):
    def permute(self, nums):
        a = permutations(nums)
        b = []
        for i in a:
            b.append(i)
        
        return b
