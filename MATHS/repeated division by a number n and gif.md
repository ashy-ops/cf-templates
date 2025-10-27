# Floor Division by 2 Sequence

At each step, you divide the previous value by 2 and take the floor. This sequence continues until:

a_t = 0

where t is the number of steps taken.

---

## 1. Stepwise Floor Division

a_(k+1) = floor(a_k / 2)

with initial value

a_0 = n

---

## 2. Direct Division by Powers of Two

Alternatively:

a_k = floor( n / (2^k) )

for k = 0, 1, 2, ..., until a_k = 0.

---

## 3. Number of Steps Before Reaching Zero

Number of steps t is:

t = floor(log2(n)) + 1

Explanation:

- The last nonzero term satisfies: n / 2^(t-1) >= 1
- The first zero term satisfies: n / 2^t < 1
- Taking log base 2: t > log2(n)
- Since t is integer: t = floor(log2(n)) + 1
- Also for some other number instead of 2 it will be floor(logb(n))+1

---

## 4. Example

For n = 20:

log2(20) ≈ 4.32

Number of steps:

t = floor(4.32) + 1 = 5

Sequence:

20 -> 10 -> 5 -> 2 -> 1 -> 0

---

## Summary Table

| Method               | Formula                      | Range of k                     |
|----------------------|------------------------------|-------------------------------|
| Stepwise division    | a_(k+1) = floor(a_k / 2)     | k = 0, 1, 2, ..., t           |
| Direct division      | a_k = floor(n / (2^k))       | k = 0, 1, 2, ..., t           |
| Number of steps      | t = floor(log2(n)) + 1       | minimal integer with a_t = 0  |

---

**End of Summary**
