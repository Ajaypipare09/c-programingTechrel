#include<stdio.h>
int main()
{
     int i,j,n;
     printf("enter a no of");
     scanf("%d",&n);

     for(i=1; i<= n; i++)
     {
          for(j=1; j<=n; j++)
          if(i==n || j==1 || i==j){
               printf("*");
          } else{
               printf(" ");
          }
          printf("\n");
     }
     return 0;
}