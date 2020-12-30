/*
执行用时：2 ms, 在所有 Java 提交中击败了41.83%的用户
内存消耗：36 MB, 在所有 Java 提交中击败了34.23%的用户
*/

/*
思路：
    大顶堆
*/


class Solution {
    public int lastStoneWeight(int[] stones) {
        // 创建优先队列
        // (a, b) -> b - a : 这个是Java的lambda函数，功能：返回 b-a 的值
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>((a, b) -> b - a);
        // 存数据
        for(int x : stones)
            pq.add(x);
        
        int a,b;
        while(pq.size() > 1) {
            a = pq.poll();
            b = pq.poll();
            if(a == b) continue;
            else pq.add(a - b);
        }
        if(pq.size() == 0) return 0;
        return pq.poll();
    }
}