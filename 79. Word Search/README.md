### Note
[題目](https://leetcode.com/problems/word-search/description/)

- Prune: 如果一個字母在 board 出現的次數少於在 word 出現的次數 → word 一定找不到
- 把 failure 的條件獨立出來寫 比寫四個快
- 要記錄這個點有沒有跑過了，不然會往回找
- 一個 branch 看完之後要把位置改回沒看過，不然其他 banch 會以為他看過這個位置了