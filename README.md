# Swapping variables?

[![wakatime](https://wakatime.com/badge/github/ikrishagarwal/swap-variables.svg)](https://wakatime.com/badge/github/ikrishagarwal/swap-variables)
<sup>(doesn't include thinking hours)</sup>

This repository walks though on my implementation of swapping two variables without using a temporary variable or arithmetic operations or XOR.

# Algorithm

1. Initialize two variables, `a` and `b`, with the values to be swapped.
2. Shift `a` to the left by the number of bits in `b`.
3. Perform a **bitwise OR** between `a` and `b`, storing the result in `b`.
4. Perform a **bitwise AND** between `b` and a sequence of `1`s matching the number of bits in `b`, storing the result in `a`.
5. Shift `b` to the right by the number of bits in `b`.
6. **Done!**

![Visual Representation of the algorithm](SwapVariables.png)

# Code

Look at [main.c](main.c)

# Complexity

- Time complexity: `O(1)`
- Space complexity: `O(1)`

# Limitations

~~This code doesn't work for negative numbers as of now.~~

No limitations! Apart from the standard space issue same as with arithmetic operations.

# Author

- [Krish][github]

[github]: https://github.com/ikrishagarwal
