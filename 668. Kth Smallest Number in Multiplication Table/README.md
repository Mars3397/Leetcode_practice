### Note
[題目](https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/description/)

Binary search how many number smaller than the number. 
Count how many number smaller than `current_number` for each row.
-> Use `min(current_number / i, n);`