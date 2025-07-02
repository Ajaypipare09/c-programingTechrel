#include <stdio.h>
int main()

{
     float a,b,am,hm;
     printf("enter a 2 number:\n ");
     scanf("%f %f", &a,&b );

     am = (a + b)/2;
     hm = (a * b)/2;

     printf("Arithmetic Mean = %.2f\n",am);
     printf("harmonic mean = %.2f\n", hm);
}