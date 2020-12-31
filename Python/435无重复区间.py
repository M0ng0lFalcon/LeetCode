class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        n = len(intervals)
        if n == 0:
            return 0
        
        intervals.sort(key = lambda x:x[1])

        ans = 1
        right = intervals[0][1]

        for i in intervals[1:]:
            if i[0] >= right:
                right = i[1]
                ans += 1
        
        return n - ans