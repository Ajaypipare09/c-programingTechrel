#include <stdio.h>
int main()
{
     int num, i = 2;

     printf("enter a number");
     scanf("%d", &num);

     while (i <= num)
     {
        
          i = i + 2;
     }
     printf(" even number are %d", i);
}