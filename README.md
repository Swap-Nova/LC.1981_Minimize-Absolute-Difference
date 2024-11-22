* The goal here is to find the absolute difference. Therefore we have to keep on calculating sum.
* In this question, the minimum absolute difference = 0.
* Our base case will be return absolute difference between target and sum.
* Sum will be calculating by an recursive format where we choose each row in matrix and keep on adding with previous sum-up elements to reach near to, equal or just greater than target to return minimum absolute difference.
* The time complexity will be exponential form which is higher using recurion. Using DP might solve this TL issue.

```cpp
solve(mat, target, sum + mat[row][col], row+1);
```
