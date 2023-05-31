from itertools import combinations

class Solution(object):
    def combinationSum3(self, k, n):
        a = [1,2,3,4,5,6,7,8,9]
        comb = combinations(a,k)

        ans = []
        
        for i in comb:
            if(sum(i)==n):
                ans.append(i)

        return ans
        
