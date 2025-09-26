# Pattern Programming Instructions

## Overview
This guide provides instructions for implementing 36 different patterns in C++ organized into three categories: Number Patterns, Star Patterns, and Character Patterns.

## Project Structure
```
src/
├── 1_number_patterns/     # Patterns 1, 2, 7, 8, 13, 14, 19, 20, 25, 26, 31, 32
├── 2_star_patterns/       # Patterns 3, 4, 9, 10, 15, 16, 21, 22, 27, 28, 33, 34
└── 3_character_patterns/  # Patterns 5, 6, 11, 12, 17, 18, 23, 24, 29, 30, 35, 36
```

## Basic Template
All patterns follow this basic structure:
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n = 7;  // Number of rows (adjust as needed)

    // Pattern logic here

    return 0;
}
```

## Number Patterns

### Pattern 1: Right Half Number Pyramid
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
```
**Logic:** Outer loop for rows, inner loop prints numbers 1 to i
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j;
    }
    cout << endl;
}
```

### Pattern 2: Inverted Right Half Number Pyramid
```
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```
**Logic:** Outer loop for rows, inner loop prints numbers 1 to (n-i+1)
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
        cout << j;
    }
    cout << endl;
}
```

### Pattern 7: Full Number Pyramid
```
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7
```
**Logic:** Add spaces before numbers for right alignment
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int j = 1; j <= i; j++) {
        cout << j;
    }
    cout << endl;
}
```

### Pattern 8: Inverted Full Number Pyramid
```
1 2 3 4 5 6 7
 1 2 3 4 5 6
  1 2 3 4 5
   1 2 3 4
    1 2 3
     1 2
      1
```

### Pattern 13: Left Half Number Pyramid
```
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
  1 2 3 4 5 6
1 2 3 4 5 6 7
```

### Pattern 14: Inverted Left Half Number Pyramid
```
1 2 3 4 5 6 7
  1 2 3 4 5 6
    1 2 3 4 5
      1 2 3 4
        1 2 3
          1 2
            1
```

### Pattern 19: Number K Pattern
```
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
```

### Pattern 20: Inverted Number K Pattern
```
1 2 3 4 5 6 7
  1 2 3 4 5 6
    1 2 3 4 5
      1 2 3 4
        1 2 3
          1 2
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
  1 2 3 4 5 6
1 2 3 4 5 6 7
```

### Pattern 25: Number Hourglass
```
1 2 3 4 5 6 7
 1 2 3 4 5 6
  1 2 3 4 5
   1 2 3 4
    1 2 3
     1 2
      1
     1 2
    1 2 3
   1 2 3 4 
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7
```

### Pattern 26: Number Diamond
```
      1
     1 2 
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7
 1 2 3 4 5 6
  1 2 3 4 5
   1 2 3 4
    1 2 3
     1 2
      1
```

### Pattern 31: Right Number Diamond
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

### Pattern 32: Left Number Diamond
```
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
  1 2 3 4 5 6
1 2 3 4 5 6 7
  1 2 3 4 5 6
    1 2 3 4 5
      1 2 3 4
        1 2 3
          1 2
            1
```

## Star Patterns

### Pattern 3: Right Half Star Pyramid
```
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
```
**Logic:** Replace numbers with stars
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
}
```

### Pattern 4: Inverted Right Half Star Pyramid
```
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
```

### Pattern 9: Full Star Pyramid
```
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
```

### Pattern 10: Inverted Full Star Pyramid
```
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
```

### Pattern 15: Left Half Star Pyramid
```
            *
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *
```

### Pattern 16: Inverted Left Half Star Pyramid
```
* * * * * * *
  * * * * * *
    * * * * *
      * * * *
        * * *
          * *
            *
```

### Pattern 21: Star K Pattern
```
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
```

### Pattern 22: Inverted Star K Pattern
```
* * * * * * *
  * * * * * *
    * * * * *
      * * * *
        * * *
          * *
            *
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *
```

### Pattern 27: Star Hourglass
```
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
```

### Pattern 28: Star Diamond
```
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
```

### Pattern 33: Right Star Diamond
```
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
```

### Pattern 34: Left Star Diamond
```
            *
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *
  * * * * * *
    * * * * *
      * * * *
        * * *
          * *
            *
```

## Character Patterns

### Pattern 5: Right Half Character Pyramid
```
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
```
**Logic:** Use ASCII conversion to get characters
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << (char)('A' + j - 1);
    }
    cout << endl;
}
```

### Pattern 6: Inverted Right Half Character Pyramid
```
A B C D E F G
A B C D E F
A B C D E
A B C D
A B C
A B
A
```

### Pattern 11: Full Character Pyramid
```
      A
     A B
    A B C
   A B C D
  A B C D E
 A B C D E F
A B C D E F G
```

### Pattern 12: Inverted Full Character Pyramid
```
A B C D E F G
 A B C D E F
  A B C D E
   A B C D
    A B C
     A B
      A
```

### Pattern 17: Left Half Character Pyramid
```
            A
          A B
        A B C
      A B C D
    A B C D E
  A B C D E F
A B C D E F G
```
**Logic:** Each row uses the same character repeated
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << (char)('A' + i - 1);
    }
    cout << endl;
}
```

### Pattern 18: Inverted Left Half Character Pyramid
```
A B C D E F G
  A B C D E F
    A B C D E
      A B C D
        A B C
          A B
            A
```

### Pattern 23: Character K Pattern
```
A B C D E F G
A B C D E F
A B C D E
A B C D
A B C
A B
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
```

### Pattern 24: Inverted Character K Pattern
```
A B C D E F G
  A B C D E F
    A B C D E
      A B C D
        A B C
          A B
            A
          A B
        A B C
      A B C D
    A B C D E
  A B C D E F
A B C D E F G
```

### Pattern 29: Character Hourglass
```
A B C D E F G
 A B C D E F
  A B C D E
   A B C D
    A B C
     A B
      A
     A B
    A B C
   A B C D
  A B C D E
 A B C D E F
A B C D E F G
```

### Pattern 30: Character Diamond
```
      A
     A B
    A B C
   A B C D
  A B C D E
 A B C D E F
A B C D E F G
 A B C D E F
  A B C D E
   A B C D
    A B C
     A B
      A
```

### Pattern 35: Right Character Diamond
```
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
A B C D E F
A B C D E
A B C D
A B C
A B
A
```

### Pattern 36: Left Character Diamond
```
            A
          A B
        A B C
      A B C D
    A B C D E
  A B C D E F
A B C D E F G
  A B C D E F
    A B C D E
      A B C D
        A B C
          A B
            A
```

## Key Programming Concepts

### ASCII Character Conversion
- `'A' + 0` = 'A' (ASCII 65)
- `'A' + 1` = 'B' (ASCII 66)
- `'A' + 2` = 'C' (ASCII 67)
- Formula: `(char)('A' + offset)` where offset starts from 0

### Loop Patterns
1. **Outer loop**: Controls number of rows
2. **Inner loop(s)**: Controls what gets printed in each row
3. **Space loop**: For alignment (right-aligned patterns)

### Common Formulas
- **Triangle**: `j <= i` (ascending size)
- **Inverted Triangle**: `j <= n - i + 1` (descending size)
- **Right Alignment**: Print `n - i` spaces before content
- **Diamond**: Combine ascending and descending patterns
- **Hollow**: Print characters only at edges (`j == 1` or `j == i`)

### Tips for Implementation
1. Start with the basic shape using simple characters/numbers
2. Add spacing for alignment
3. Replace with target characters (numbers, stars, or letters)
4. Test with different values of `n`
5. Use consistent indentation and variable naming

### Debugging Tips
- Print row and column indices to understand the pattern
- Start with n=3 or n=4 for easier debugging
- Build complex patterns step by step
- Use descriptive variable names (row, col instead of i, j)
