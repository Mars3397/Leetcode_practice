### Note
[題目](https://leetcode.com/problems/fizz-buzz/description/)

- 條件這樣寫
```cpp
if (i % 3 == 0 && i % 5 == 0) {
    ans.push_back("FizzBuzz");
} else if (i % 3 == 0) {
    ans.push_back("Fizz");
} else if (i % 5 == 0) {
    ans.push_back("Buzz");
} else {
    ans.push_back(to_string(i));
}
```