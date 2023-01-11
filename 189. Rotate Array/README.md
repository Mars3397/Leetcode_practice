`Reverse()` 可以反轉 STL 的內容，可參考[此網站](http://imyon.github.io/cpp/2014/01/11/c++-reverse()函数的用法)

> 先整個反轉，再把前面跟後面的部分各自反轉就可以有 cycle 移動的效果
> 

```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
```