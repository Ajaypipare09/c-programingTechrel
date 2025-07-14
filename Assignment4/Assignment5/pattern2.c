// ***** 
// **** 
// *** 
// ** 
// * 



#include<stdio.h>
int main()
{
     int i,j,k,n;
     printf("enter a number");
     scanf("%d",&n);

     for(i = 0; i<n; i++)
     {
          for(k = 0; k < i; k++)
          printf(" ");

          for(j = 1; j<n; j++)
          {
               printf("*");
          }
          printf("\n");
     }
     return 0;
}