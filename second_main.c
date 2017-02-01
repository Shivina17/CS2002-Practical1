#include <stdio.h>
#include "fib.h"
int first, second;
int main(void){
    
    int n;
    int flag=1;

    
    while(flag==1){
        printf("Enter first and second terms\n");
        scanf("%d,%d",&first, &second);
        
        if(first==0 && second==0){
            flag=0;
            break;
        }
        printf("Length?\n");
        scanf("%d",&n);
        
        printf("[");
        for (int i = 1; i < n; i++) {
            printf("%d, ",fibcalc(i));
        }
        printf("%d]\n",fibcalc(n));
    }
}