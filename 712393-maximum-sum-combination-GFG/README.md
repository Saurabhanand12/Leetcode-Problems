# [Maximum Sum Combination](https://www.geeksforgeeks.org/problems/maximum-sum-combination/1)
## Medium
You are given two integer arrays a[] and b[] of equal size. A sum combination is formed by adding one element from a[] and one from b[], using each index pair (i, j) at most once. Return the top k maximum sum combinations, sorted in non-increasing order.
Examples:
Input: a[] = [3, 2], b[] = [1, 4], k = 2Output: [7, 6]Explanation: Possible sums: 3 + 1 = 4, 3 + 4 = 7, 2 + 1 = 3, 2 + 4 = 6, Top 2 sums are 7 and 6.
Input: a[] = [1, 4, 2, 3], b[] = [2, 5, 1, 6], k = 3Output: [10, 9, 9]Explanation:&nbsp;The top 3 maximum possible sums are : 4 + 6 = 10, 3 + 6 = 9, and 4 + 5 = 9
Constraints:1 ≤ a.size() = b.size() ≤ 1051 ≤ k ≤ a.size()1 ≤ a[i], b[i] ≤ 104