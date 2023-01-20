### Note
[題目](https://leetcode.com/problems/find-k-th-smallest-pair-distance/)

First sort, than binary search for distances.
**Speed up**: do not make `j` start from `i + 1`, make `j` start from the position in last round instead. 
-> because all pairs between `i` and `j` definitely satisfy the condition. 
```c++
for (int i = 0; i < nums.size(); i++) {
    while (j < nums.size() && abs(nums[i] - nums[j]) <= distance) {
        j++;
    }
    smaller += j - i - 1;
}
```