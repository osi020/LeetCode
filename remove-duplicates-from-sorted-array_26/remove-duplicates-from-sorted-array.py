class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0 # This is our writer
        for i in range(1,len(nums)) : # This is our reader
            if nums[k] != nums[i] : 
                k=k+1
                nums[k] = nums[i]
        return k+1
    # L'idee fondamentale est d'avoir un fast et un slow pointer .Le fast pointer permet de parcourir l'array et de trouver les elements uniques alors que le slow pointer permet de overwrite les elements du tableau a gauche et de retourner la taille du tableau sans les duplicates
    # k+1 parce que k est un index et nous on veut la taille du tableau (Toujour taille tableau =index +1)

solution = Solution()
print(solution.removeDuplicates([1,1,2,2,3,4,4,5]))