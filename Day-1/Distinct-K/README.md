# Distinct K

## Problem Statement

You wish to help Ashish, who possesses a collection of N strings, some of which may be duplicated, and has been assigned the task of finding the kth unique string.

If the number of unique strings is less than k, he needs to display -1. Considering you are Ashish's best friend can you assist him with this challenge?

---

## Input Format

The first line contains an integer **`N`** denoting the number of strings.

The next **`N`** lines contain strings.

The next line contains an integer **`k`**.

---

## Output Format

The output contains the kth distinct string. If there are less than **`k`** unique strings display **`-1`**.

---

## Constraints

- `1 <= N <= 10^3`
- `1 <= String.length() <= 10^3`

---

## Sample Testcase 0

### Input

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

### Output

```text
a
```

### Explanation

The only strings in arr that are distinct are **"d"** and **"a."** The letter **"d"** comes first, making it the first separate string.

Because **"a"** appears second, it is the second distinct string. **"a"** is returned since **`k == 2`**.

---

## Sample Testcase 1

### Input

```text
3
dac
ba
a
1
```

### Output

```text
dac
```

### Explanation

As all the strings are unique we have the strings in the order:

```text
dac
ba
a
```

Now, as we can see the value of **`k = 1`**, therefore, the string returned is the first unique string, **`dac`**.