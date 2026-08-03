# Distinct K

## Problem Statement

Ashish has a collection of **N** strings, where some strings may appear more than once. Your task is to find the **kth unique string** (a string that appears exactly once).

If the total number of unique strings is less than **k**, print **-1**.

---

## Input Format

- The first line contains an integer **N**, representing the number of strings.
- The next **N** lines each contain a string.
- The last line contains an integer **k**.

---

## Output Format

- Print the **kth unique string**.
- If there are fewer than **k** unique strings, print **-1**.

---

## Constraints

- `1 ≤ N ≤ 10^3`
- `1 ≤ String.length() ≤ 10^3`

---

## Sample Input 1

```text
6
d
b
c
b
c
a
2
```

## Sample Output 1

```text
a
```

### Explanation

The strings that appear exactly once are:

```text
d, a
```

- 1st unique string → `d`
- 2nd unique string → `a`

Since `k = 2`, the output is:

```text
a
```

---

## Sample Input 2

```text
3
dac
ba
a
1
```

## Sample Output 2

```text
dac
```

### Explanation

All strings are unique and appear in their original order:

```text
dac, ba, a
```

Since `k = 1`, the first unique string is:

```text
dac
```