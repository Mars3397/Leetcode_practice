### Note
[題目](https://leetcode.com/problems/decode-ways/description/)

- 開一個 DP 的 vector 用來存到目前為止有幾種 decode ways
- 如果現在這個 digit 不是 0，表示他一定可以保持現在可以有的 decode ways
- 接下來再判斷現在這個 digit 可不可以跟前面合併，如果可以就表示前一個之前所有的 decode way 都可以再增加一種