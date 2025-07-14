#include<stdio.h>
int main()
{
     int i,j,n;
     printf("enter a number");
     scanf("%d",&n);

     for(i=1; i<=n; i++)
     {
          for(j=n; j>= n-i+1; j--)

          printf("%d",j);

          printf("\n");
     }

     return 0;
}