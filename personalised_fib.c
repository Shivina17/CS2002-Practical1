#include <stdio.h>
    
extern int first;
extern int second;
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
