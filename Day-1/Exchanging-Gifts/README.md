# Exchanging Gifts

## Problem Statement

The royal family exchanges gifts at Christmas, where the **youngest member** receives gifts from everyone else but does not give any gifts.

Given the details of all the exchanged gifts among the family members, determine the youngest member of the family.

> **Note:** A family member does not give more than one gift to the same member.

---

## Input Format

- The first line contains two integers **`n`** and **`m`**, representing the number of family members and the number of gifts exchanged.
- The next **`m`** lines each contain two integers **`aᵢ`** and **`bᵢ`**, where **`aᵢ`** gave a gift to **`bᵢ`**.

---

## Output Format

Print a single integer representing the youngest member of the family.

If no such member exists, print **`-1`**.

---

## Constraints

- `1 ≤ n ≤ 10⁴`
- `0 ≤ m ≤ 10⁵`
- `1 ≤ aᵢ, bᵢ ≤ n`

---

## Sample Testcase 0

### Input

```text
2 1
1 2
```

### Output

```text
2
```

### Explanation

Family member **1** gave a gift to family member **2**. Member **2** did not give any gifts and received a gift from every other member. Therefore, **2** is the youngest member.

---

## Sample Testcase 1

### Input

```text
3 2
1 3
2 3
```

### Output

```text
3
```

### Explanation

Member **3** received gifts from members **1** and **2** and did not give any gifts to anyone. Therefore, **3** is the youngest member.