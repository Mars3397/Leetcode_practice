### Note
[題目](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/)

- 這種題目要用 stack 實作 → 把遇到的數字都放進去 stack 裡面
- 每遇到一個 operator 就從 stack pop 最上面兩個，算完再放回 top
- 最後跑完整個 token 之後 return stack 的 top