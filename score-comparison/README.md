# Score Comparison

## Overview

A C++ program that compares two sets of three numerical scores and calculates the points earned by each participant.

## Features

- Compares corresponding values from two sets of scores.
- Awards one point to the participant with the higher value.
- Does not award points when values are equal.
- Displays both participants' final scores.

## Approach

1. Read three values for each participant.
2. Compare the values at each corresponding position.
3. Update the score of the participant with the higher value.
4. Print both scores in order.

## Example

**Input**
```text
5 6 7
3 6 10
```

**Output**
```text
1 1
```

## Complexity

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

## Language

C++

## Files

- `main.cpp` — program implementation.
- `README.md` — project documentation.
