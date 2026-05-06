# 3D Coordinates Filter

## Problem

Generate all coordinates `[i, j, k]` such that:

- `0 <= i <= x`
- `0 <= j <= y`
- `0 <= k <= z`
- `i + j + k != n`

## Solution

```python
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    result = [[i, j, k]
              for i in range(x + 1)
              for j in range(y + 1)
              for k in range(z + 1)
              if i + j + k != n]

    print(result)
```

## Example

Input:

```text
1
1
1
2
```

Output:

```text
[[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]
```

## Complexity

- Time: `O(x * y * z)`
- Space: `O(1)`