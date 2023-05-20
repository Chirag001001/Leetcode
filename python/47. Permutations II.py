from itertools import permutations

class Solution(object):
    def permuteUnique(self, nums):
        p = permutations(nums)

        l =[]
        for i in p:
            l.append(i)

        l = set(l)
        return l
