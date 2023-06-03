from itertools import combinations

class Solution(object):
    def subsets(self, nums):
        n = len(nums)

        ans =[]
        for i in range (n+1):
            ans.append(combinations(nums,i))
        

        anss=[]
        for i in ans:
            for j in i:
                anss.append(j)

        return anss
                
