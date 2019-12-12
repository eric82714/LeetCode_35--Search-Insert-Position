class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        index = 0;
        
        for i in range(len(nums)):
            if target > nums[i]: 
                index = i+1
                continue
            if target == nums[i]: 
                index = i
                continue
                
        return index
