#include <stdio.h>
int main()
{
     int fact = 1, i, n;
     printf("enter a number");
     scanf("%d", &n);

     i = 2;
     while (i <= n)
     {
          fact = fact * i;
          i++;
     }
     printf("Factorial of%dis%d", n, fact);
}