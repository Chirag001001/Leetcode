class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        l1 = list(ransomNote)
        l2 = list(magazine)

        print(l1)
        print(l2)

        for i in l1:
            if i in l2:
                l2.remove(i)
                # print(l2)
            else:
                return False

        return True #necessary
