#include <stdio.h>
#include <stdint.h>
void hoanvi(int *x, int *y){
int t;
t=*x;
*x=*y;
*y=t;
}