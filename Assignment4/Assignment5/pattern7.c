// * 
// ** 
// *** 
// **** 
// ***** 


#include<stdio.h>
int main()
{
     int i,j,k,n;
     printf("enter a rows");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
     for ( k = i;  k < n; k++)
       printf(" ");
     
          for(j = 1; j <= i; j++){
           
          printf("* ");
     printf(" ");
          }
          printf("\n");
     
    }
    return 0;
}