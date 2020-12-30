/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.2 MB, 在所有 C++ 提交中击败了68.09%的用户
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    	// 优先队列
        priority_queue<int> pq;
        for(int x:stones)
            pq.push(x);

        while(pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            if(a == b) continue;
            else pq.push(a-b);
        }
        
        if(pq.size() == 0) return 0;
        return pq.top();
    }
};