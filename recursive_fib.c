#include <stdio.h>

int fibcalc(int n){
    if(n==1){
        return 0;
    }

    else if(n==2){
        return 1;
    }

    else{
        return fibcalc(n-1)+2*fibcalc(n-2);
    }
}