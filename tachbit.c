#include <stdio.h>
#include <math.h>
#include <stdint.h>
void tachbit(uint16_t a){
     uint8_t b;
     b=(uint8_t)(a);
     uint8_t c;
     c=a>>8;
     printf("%02x\n",b);
     printf("%02x\n",c);
}