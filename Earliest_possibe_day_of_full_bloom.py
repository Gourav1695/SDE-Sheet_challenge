class Solution:
    def earliestFullBloom(self, plantTime: List[int], growTime: List[int]) -> int:
        ans = timer = 0 
        for g, p in sorted(zip(growTime, plantTime), reverse=True):
            timer += p
            ans = max(ans, timer+g)
        return ans
