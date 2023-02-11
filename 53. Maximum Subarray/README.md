### Note
[題目](https://leetcode.com/problems/maximum-subarray/description/)

- curr 用來存加到現在的 sum 是多少，ans 用來存現在最大的 sum
- 如果 curr < 0 就表示現在這段的總和不能對之後的綜合做出貢獻，就可以省略不看
    
    → `curr = 0`