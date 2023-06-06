### Note
[題目](https://leetcode.com/problems/swap-nodes-in-pairs/description/)

- 三個一組做，`head` 跟 `head→next` 會交換，`prev` 會是 `head` 的前一個
- 每一組要做的就是：
    1. 讓 `prev→next` = `head→next`
    2. 讓 `head→next→next` = `head`
    3. 讓 `head→next` = `head→next→next`
    4. 整組往前移兩個 node