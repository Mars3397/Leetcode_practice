### Note
[題目](https://leetcode.com/problems/minimum-window-substring/description/)

- `remain` is used to keep the number of every char in T
- `required` is used to keep how many char in T are unmatched in sliding window
- `remain[s[end]] > 0` means that the `s[end]` appears in T
- `remain[s[start]] == 0` means that `s[start]` appears in T and there have exactally the same number of it in sliding window and T