class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0, len = flowerbed.size();
        for(int i=0; i<len;) {
            if(flowerbed[i] == 1) i += 2;
            else if(i == len - 1 || flowerbed[i+1] == 0) {
                i += 2;
                ++ cnt;
            } else i += 3;
        }

        return cnt >= n;
    }
};