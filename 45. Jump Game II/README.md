### Note
[題目](https://leetcode.com/problems/jump-game-ii/description/)

- Idea: 在現在可以 reach 到的範圍內，找最大可以到達的 index
- 在到達可以 reach 的範圍的底的時候，把 ans++，然後選可以跳最遠的那個 jump
- 範圍變成 max_jump - i