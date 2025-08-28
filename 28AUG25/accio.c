/**
 * @file accio_search.c
 * @brief Implements a binary search function (`Accio`) to find a target in a sorted array.
 *
 * This program defines a function `Accio` that performs a binary search on a
 * sorted integer array. If the target element is found, it returns the index.
 * If not, it returns -1.
 *
 * Function: 
 * int Accio(int target, int arr[], int n)
 *   - @param target: The integer value to be searched in the array.
 *   - @param arr[]: The sorted integer array in which the search is performed.
 *   - @param n: The size of the array (number of elements).
 *   - @return Index of the target element if found, otherwise -1.
 *
 * Algorithm:
 * - Initialize start and end pointers.
 * - Repeatedly divide the search range in half (binary search).
 * - If the middle element matches the target → return index.
 * - If the middle element is greater → search left half.
 * - Otherwise → search right half.
 * - Continue until the element is found or search range becomes invalid.
 *
 * Example:
 *   arr = {1, 4, 8, 12}
 *   target = 10
 *   Result → NOT FOUND!
 *
 * Output:
 * - Prints "FOUND IT! at <index>" if target is located.
 * - Prints "NOT FOUND!" if target does not exist in the array.
 *
 * @note Ensure that `n` correctly represents the array size; otherwise, the
 *       search may access out-of-bounds indices.
 *
 * @bug In the provided `main`, the function is called with `n=3` while the 
 *      array has 4 elements, which risks incorrect behaviour.
 *
 * @date 28-08-2025
 
 */

#include <stdio.h>
#include<stdbool.h>

int Accio(int target, int arr[], int n){
    int start = 0;
    int end = n;
    int mid;

    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] >  target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,4,8,12};

    int res = Accio(10,arr,3);
    if(res == -1){
        printf("NOT FOUND!");
    }else{
        printf("FOUND IT! at %d",res);
    }
    

    return 0;
}
