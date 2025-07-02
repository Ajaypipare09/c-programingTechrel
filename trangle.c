#include<stdio.h>
int main ()
{
     float a,b,c;
     printf("enter a side of traingle");
     scanf("%f%f%f", &a,&b, &c);

     if((a +b >c) && (a+c >b) && (b+c >c))

     printf("the trangle is valid");
     else
     printf("trangle is in valid");

     return 0;

     
}