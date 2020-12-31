class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // 如果空，返回0
        if(intervals.empty()) return 0;

        // 右边界排序
        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b) {
            return a[1] < b[1];
        });

        int n = intervals.size();
        int ans = 1, right = intervals[0][1];
        for(int i=1; i<n; ++i) {
            // 当探测到下一个区间的左边界
            if(intervals[i][0] >= right) {
                ++ans;
                right = intervals[i][1];
            }
        }

        return n - ans;
    }
};