# [28. 实现 strStr()](https://leetcode-cn.com/problems/implement-strstr/)

## 0. C++

### 0.1 方法 1 : string 的 find 方法

```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        string::size_type pos = haystack.find(needle);
        if(pos != haystack.npos) {
            return int(pos);
        } else return -1;
    }
};
```

> 执行用时：8 ms, 在所有 C++ 提交中击败了20.98%的用户
>
> 内存消耗：6.6 MB, 在所有 C++ 提交中击败了86.35%的用户

## 0.2 方法 2 : 暴力匹配

```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for(int i=0; i<n-m+1; ++i) {
            bool flag = true;
            for(int j=0; j<m; ++j) {
                if(haystack[i+j] != needle[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) return i;
        }
        return -1;
    }
};
```

