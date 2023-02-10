### Note
[題目](https://leetcode.com/problems/odd-even-linked-list/description/)

- 就用兩個頭，一個把其奇數的都接起來，另一個把偶數的都接起來，最後再把奇數尾接到偶數的頭
- 兩個一定要一起跑，不然 next 的順序會亂掉
- while 終止條件設為 `odd→next && even→next` 就可以保證下面兩種情況下兩個頭都做到各自的底
    - 奇數尾：`even→next == NULL` → odd 等於最後一個 node 的前一個， even 是最後一個
    - 偶數尾：`odd→next == NULL` → even 等於最後一個 node 的前一個， odd 是最後一個