# Special Pythagoren Triplet

A Pythagorean triplet is a set of three natural numbers, $a < b < c$, for which,

$$ a^2 + b^2 = c^2 $$

There exists exactly one Pythagorean triplet for which $a + b + c = 1000$.
Find the product $abc$.

---

Solution:

Any pythagorean triplet can be expressed as:

$$
S_P = \{
    m, n \in \mathbf{W}, m^2 > n | (m^2-n), (2m\sqrt n), (m^2+n)
    \}
$$

If $a, b, c$ are a pythagorean triplet, their product is given by:

$$
abc = 2m\sqrt n(m^4-n^2)
$$

Since the numbers must add up to 1000, we get the following relation:
$$
m^2 + m\sqrt n - 500 = 0 \\
m = \frac{-\sqrt n + \sqrt {n + 2000}}{2}
$$
$n$ and $n+2000$ must hence be prefect squares.
