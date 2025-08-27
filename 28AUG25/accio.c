
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