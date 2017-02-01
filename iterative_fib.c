#include <stdio.h>
    
int first = 0;
int second = 1;
int fibcalc(int n){
    int num=0;
    int c=1;
    if(c<n){
        num=second+2*first;
        first=second;
        second=num;
        c++;
    }
    return(first);
}
