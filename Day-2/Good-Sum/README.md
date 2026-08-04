# Good Sum

## Problem Statement

You are given an array **`A`** of size **`N`**.

Process the array from left to right. Whenever you encounter a negative element **`A[i] = X`**:

1. Consider the elements immediately before **`X`** in the **current modified array**.
2. Remove the minimum number of consecutive elements (moving left from **`X`**) whose sum is greater than or equal to **`|X|`**.
3. If the sum of all elements before **`X`** is still less than **`|X|`**, remove all elements before **`X`**.
4. After the removals, replace **`X`** with its absolute value **`|X|`**.

Continue processing the remaining elements using the updated array after each operation.

Return the sum of all elements present in the array after all operations have been completed.

> **Note:**
> - Perform an operation only when the current element is negative.
> - For every negative element, use the latest modified version of the array.
> - The removed elements must be consecutive and immediately precede the negative element.

---

## Input Format

- The first line contains an integer **`N`**.
- The second line contains **`N`** space-separated integers representing the array elements.

---

## Output Format

Print a single integer representing the final sum of all elements after performing the required operations.

---

## Constraints

- `1 ≤ N ≤ 10^5`
- `-10^4 ≤ A[i] ≤ 10^4`

---

## Sample Testcase 0

### Input

```text
5
4 2 2 3 -6
```

### Output

```text
10
```

### Explanation

The negative element is **`-6`**.

Starting from the element immediately before **`-6`**:

- `3` → cumulative sum = `3`
- `2` → cumulative sum = `5`
- `2` → cumulative sum = `7` (≥ `6`)

The minimum consecutive elements required are **`{2, 2, 3}`**. Remove them and convert **`-6`** to **`6`**.

Modified array:

```text
[4, 6]
```

Final sum:

```text
4 + 6 = 10
```

---

## Sample Testcase 1

### Input

```text
7
2 -1 3 4 -4 2 3
```

### Output

```text
13
```

### Explanation

**Step 1:** Process **`-1`**

The element immediately before **`-1`** is **`2`**.

Since **`2 ≥ 1`**, remove **`2`** and convert **`-1`** to **`1`**.

Modified array:

```text
[1, 3, 4, -4, 2, 3]
```

**Step 2:** Process **`-4`**

The element immediately before **`-4`** is **`4`**.

Since **`4 ≥ 4`**, remove **`4`** and convert **`-4`** to **`4`**.

Modified array:

```text
[1, 3, 4, 2, 3]
```

Final sum:

```text
1 + 3 + 4 + 2 + 3 = 13
```