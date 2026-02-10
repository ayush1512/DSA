/*
1. Constant Window, ws(Window Size)
    Two Pointers: i=0, j=ws-1
    while incrementing both to reach end from start

2. Longest Subarray where <condition>
    Ex. arr = [2,5,1,10,10] k = 14
    ~Brute: Generate all substrings
        Structure
        for(i=0 -> n-1)
                for(j=i -> n-1)

    ~Better: Using window [Expansion(right), Shrink(left)] (ws=r-l+1) TC: O(N+N) SC: O(1)
        l = 0, r = 0, sum = 0, maxlen= 0
        while(r<n-1):
            sum = sum + arr[r] (CONDITION)
            while sum > k:
                sum = sum - arr[r] (CONDITION)
                l++ (SHRINKING)
            if sum <= k:
                maxlen = max(maxlen, r-l+1)
            r++ (EXPANSION)
        print(maxlen)

    ~Optimal {Improving Better}: Reduce SHRINKING by fixing the window size to max length and then increasing it.
        Incase of maxlen 

3. Number of Subarrays where <condition>
    Ex. Sum = k

4. Shortest/Minimum Window: SHRINKING until the valid min. ws is found
*/

Here are classic problems from GeeksforGeeks (GFG) and LeetCode that use the four sliding window logics described in your notes:

---

**1. Constant Window (Fixed Size Window)**
- **Simple**: Find average of all subarrays of size k
- **Simple**: Maximum/Minimum element in subarray of size k (brute force)
- **Simple**: [Sum of all subarrays of size k](https://www.geeksforgeeks.org/sum-of-all-subarrays-of-size-k/)
- GFG: [Maximum of all subarrays of size k](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/)
- LeetCode: [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)

---

**2. Longest Subarray with Condition (Variable Size Window)**
- GFG: [Longest Subarray with Sum less than or equal to K](https://www.geeksforgeeks.org/longest-subarray-with-sum-less-than-or-equal-to-k/)
- LeetCode: [Longest Subarray of Sum at Most K](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/) (variation)
- LeetCode: [1004. Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/)

---

**3. Number of Subarrays with Condition**
- GFG: [Count subarrays with sum equal to k](https://www.geeksforgeeks.org/count-subarrays-with-given-sum/)
- LeetCode: [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

---

**4. Shortest/Minimum Window**
- GFG: [Smallest window in a string containing all characters of another string](https://www.geeksforgeeks.org/smallest-window-in-a-string-containing-all-characters-of-another-string/)
- LeetCode: [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
- LeetCode: [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)

---

These problems directly apply the sliding window techniques outlined in your notes. Let me know if you want explanations or code samples for any!