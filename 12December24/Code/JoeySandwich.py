"""
@file sandwich_dp.py
@brief Dynamic Programming solution to maximise sandwich consumption without eating two consecutive sandwiches.

This module defines a function `letThereBeSandwiches` that solves a variant of 
the "House Robber Problem" using dynamic programming. Given an array of integers
`sandwich`, where each value represents the tastiness (or size) of a sandwich, 
the goal is to maximise the total value eaten under the constraint that you 
cannot eat two consecutive sandwiches.

Function:
    def letThereBeSandwiches(sandwich: list[int]) -> int
        - @param sandwich: List of integers representing sandwich values.
        - @return Maximum sum of sandwich values that can be eaten without 
                  choosing two adjacent sandwiches.

Algorithm:
- Base cases:
    * days[0] = sandwich[0]
    * days[1] = max(sandwich[0], sandwich[1])
- For each i ≥ 2:
    * days[i] = max(days[i-1], days[i-2] + sandwich[i])
    (Choose between skipping the current sandwich or eating it along with the 
     optimal solution from two steps back.)
- Return days[n-1] as the maximum achievable value.

Example:
    Input:  sandwich = [1, 2, 3, 4, 5, 6, 7]
    Output: 16
    Explanation: Optimal choice = 1 + 3 + 5 + 7 = 16

Time Complexity: O(n)
Space Complexity: O(n)

@author ...
@date 28-08-2025
"""

def letThereBeSandwiches(sandwich):
    n=len(sandwich)
    days = [0] * n
    days[0]=sandwich[0]
    days[1] = max(sandwich[0],sandwich[1])
    
    
    for i in range(2,n):
        days[i]=max(days[i-1],days[i-2]+sandwich[i])
    
    return days[n-1]
    
    
    
sandwich = [1,2,3,4,5,6,7]
print(letThereBeSandwiches(sandwich))


