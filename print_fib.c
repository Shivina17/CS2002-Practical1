#include <stdio.h>
#include "fib.h"

int main(void){

    int n;
    printf("Length?\n");
    scanf("%d",&n);
    int fib;
    printf("[");
    if(n!=0){
        for(int i=1;i<n;i++){
            fib = fibcalc(i);
            printf("%d, ",fib);
        }   
        fib=fibcalc(n);
        printf("%d]\n",fib);
    }
    else{
        printf("]\n");
    }
}