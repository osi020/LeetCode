# Remove Element (In-Place)

## Problem

Given an array `nums` and a value `val`, remove all occurrences of `val` in-place and return the number of remaining elements `k`.

## Solution

```python
class Solution(object):
    def removeElement(self, nums, val):
        k = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        return k
```

## Explanation

* Iterate through the array with index `i`
* Use `k` to track where to place elements not equal to `val`
* When `nums[i] != val`, copy it to `nums[k]` and increment `k`
* Elements equal to `val` are skipped (not copied)

## Result

* The first `k` elements of `nums` contain the valid values
* The rest of the array is ignored

Example:

```
nums = [0,1,2,2,3,0,4,2], val = 2

After execution:
nums = [0,1,3,0,4,0,4,2]
k = 5

Valid result:
nums[:k] = [0,1,3,0,4]
```

## Key Points

* The array size does not change
* Elements are overwritten, not deleted
* Only the first `k` elements matter
* Time complexity: O(n)
* Space complexity: O(1)
