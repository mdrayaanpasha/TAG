// Online C compiler to run C program online
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