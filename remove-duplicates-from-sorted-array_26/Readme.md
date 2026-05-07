# Remove Duplicates from Sorted Array

## Problem

Given an array `nums` sorted in non-decreasing order, remove the duplicates in-place and return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique values in their original order.

## Solution

```python
class Solution(object):
    def removeDuplicates(self, nums):
        k = 0
        for i in range(1, len(nums)):
            if nums[i] != nums[k]:
                k += 1
                nums[k] = nums[i]

        return k + 1


if __name__ == '__main__':
    solution = Solution()
    nums = [1, 1, 2, 2, 3]
    result = solution.removeDuplicates(nums)
    print result
```

## Explanation

Iterate through the array with index `i`.

Use `k` to track where to place the next unique element.

When `nums[i] != nums[k]`, copy `nums[i]` to `nums[k + 1]` and increment `k`.

Duplicate values are skipped, so only the unique values are kept at the front of the array.

## Result

The first `k` elements of `nums` contain the unique values.

The rest of the array is ignored.

## Example

```text
nums = [1, 1, 2, 2, 3]
```

After execution:

```text
nums = [1, 2, 3, 2, 3]
k = 3
```

Valid result:

```text
nums[:k] = [1, 2, 3]
```

## Key Points

The array size does not change.

Elements are overwritten, not deleted.

Only the first `k` elements matter.

## Complexity

Time complexity: `O(n)`

Space complexity: `O(1)`
