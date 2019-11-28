#include <stdio.h>
#include <math.h>
#include <ptb2.h>
void ptb2(int a, int b, int c){
float x1,x2,delta;
delta=b*b-4*a*c;
if(delta < 0)
{printf("Phuong tirnh vo nghiem \n");}
else if (delta==0){
    x1=x2=(-b)/(2*a);
    printf("phuong trinh co nghiem kep x= %02f \n", x1);
}
else if (delta > 0)
{
    delta=sqrt(delta);
    x1=(-b-delta)/(2*a);
    x2=(-b+delta)/(2*a);
    printf(" x1= %0.2f \n", x1);
    printf(" x2= %0.2f \n", x2);
} 
}