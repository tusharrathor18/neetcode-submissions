class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        lst = []

        for i in range(len(nums)):

            left = 1;
            right = 1;

            for a in range(i):
                left *= nums[a];

            for b in range(i+1,len(nums)):
                right *= nums[b];

            lst.append(left*right)

        return lst

            


            
        