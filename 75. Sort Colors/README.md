### Note
[題目](https://leetcode.com/problems/sort-colors/description/)

- 跟 right 交換的時候 i 不能 ++，因為必須保證 i 的前面不能出現 2
- 如果 i 的前面出現 2 了，後面就必須出現 0 才會把 2 換回去後面，但這不一定發生