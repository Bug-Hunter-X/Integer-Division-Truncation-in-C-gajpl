# Integer Division Truncation in C

This repository demonstrates a common issue in C programming: integer division truncation. Integer division in C always truncates (discards) the fractional part of the result, which can lead to unexpected behavior if not handled carefully.

**Problem:** The code calculates `x / y`, where both `x` and `y` are integers.  The result is also an integer, with any decimal portion being discarded. This might be fine in some cases, but not all.

**Solution:** If precision is important, use floating-point types (`float` or `double`) to perform the division. If you want to keep the integer type but need to handle the remainder you could use the modulo operator (%) for additional context.