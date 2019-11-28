#include <stdio.h>
#include <math.h>
#include <ptb2.h>
#include <malloc.h>

void main(){
    void (*hampoi)(int*,int*);
    void (*hamoi_2)(int,int,int);
    hampoi = hoanvi;
int *x=malloc(sizeof(int));
*x=123;
int *y=malloc(sizeof(int));
*y=321;
printf("x= %d   y= %d\n",*x,*y);
hampoi(x,y);
printf("x= %d   y= %d\n",*x,*y);
}
