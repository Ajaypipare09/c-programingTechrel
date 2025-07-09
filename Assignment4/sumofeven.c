#include<stdio.h>
int main()
{
     int n,i,sum=0;
     printf("enter a n number");
     scanf("%d",&n);

     for(i=2;i<=n; i+=2 )
     {
          
          sum+=i;
     }
     printf("sum of even number 1 to %d is :%d",n,sum);

     return 0;
}