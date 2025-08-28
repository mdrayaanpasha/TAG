"""
@file ross_break.py
@brief Determines whether Ross was on a break before going on a date.

This module defines a function `Was_Ross_On_A_Break` which evaluates the sequence
of events in Ross’s timeline and decides if his "date" happened while he was on
a break or not. It is inspired by the famous Friends sitcom dilemma.

Function:
    def Was_Ross_On_A_Break(Hours: list[str]) -> bool | None
        - @param Hours: A list of string events in chronological order.
                       Valid events are "BREAK" and "DATE" (others are ignored).
        - @return 
            * True  → Ross was NOT on a break (he cheated).
            * False → Ross WAS on a break (safe).
            * None  → No "DATE" event occurred (undefined outcome).

Algorithm:
- Initialise `cheat = True` (assume Ross cheated).
- Traverse the list of events:
    * If "BREAK" occurs before "DATE" → set `cheat = False`.
    * When "DATE" is encountered → immediately return `cheat`.
- If traversal finishes without any "DATE" → return None.

Example:
    Input:  ["DATE", "BREAK", "FIGHT"]
    Output: True   (Ross cheated, since DATE occurred before BREAK)

    Input:  ["BREAK", "DATE", "FIGHT"]
    Output: False  (Ross was on a break when DATE happened)

    Input:  ["BREAK", "FIGHT"]
    Output: None   (DATE never occurred)

Time Complexity: O(n)  (linear scan of the events)
Space Complexity: O(1)

@author ...
@date   28-08-2025
"""

def Was_Ross_On_A_Break(Hours):
    cheat = True
    for hour in Hours:
        if hour == "BREAK":
            cheat = False
        if hour == "DATE":
            return cheat
        

Hrs = ["DATE","BREAK","","","FIGHT"]
print(Was_Ross_On_A_Break(Hrs))
