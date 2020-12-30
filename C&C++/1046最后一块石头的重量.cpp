/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.2 MB, 在所有 C++ 提交中击败了71.45%的用户
*/

/*
思路：
	大顶堆
*/


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        // 将数据存到堆
        for(int x:stones)
            pq.push(x);
        
        int a,b;
        while(pq.size() > 1) {
            a = pq.top(); pq.pop();
            b = pq.top(); pq.pop();
            if(a == b) continue;
            else pq.push(a-b);
        }
        if(pq.size() == 0) return 0;
        return pq.top();
    }
};