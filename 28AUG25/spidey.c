/**
 * @spidey.c
 * @brief A simple C program that checks if Spidey can save you based on distance constraints.
 *
 * This program simulates a scenario where Spidey must swing between buildings.
 * The buildings are represented as an array of integer positions (`arr`).
 * For Spidey to successfully swing through and save you, the gap between any
 * two consecutive buildings must not exceed 5 units.
 *
 * Logic:
 * - Iterate through the array of building positions.
 * - If the difference between any two consecutive buildings is greater than 5,
 *   Spidey cannot save you.
 * - Otherwise, Spidey can save you.
 *
 * Output:
 * - Prints "Spidey Just Saved me!!" if all consecutive gaps are ≤ 5.
 * - Prints "nah spidey cant do it!!" if any gap is > 5.
 *

 */
#include <stdio.h>
#include<stdbool.h>

int main() {
    int arr[] = {1,4,8,12};
    
    bool save = true;
    
    for(int i=1;i<4;i++){
        if(arr[i]-arr[i-1] > 5){
            save=false;
            break;
        }
    }
    
    if(save){
        printf("Spidey Just Saved me!!");
    }else{
        printf("nah spidey cant do it!!");
    }

    return 0;
}
