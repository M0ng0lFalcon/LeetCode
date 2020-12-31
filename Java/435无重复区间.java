class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        int n = intervals.length;
        if (n == 0)
            return 0;
        
        Arrays.sort(intervals, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return a[1] - b[1];
            }
        });

        int right = intervals[0][1], ans = 1;
        for(int i=1; i<n; ++i) {
            if(intervals[i][0] >= right) {
                right = intervals[i][1];
                ++ans;
            }
        }
        return n - ans;
    }
}