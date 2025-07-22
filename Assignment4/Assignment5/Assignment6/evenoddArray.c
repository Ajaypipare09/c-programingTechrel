#include<stdio.h>
int main()
{
     int a[100],i,n;

     printf("enter a element ");
     scanf("%d", &n);

     printf("enter  element :");
     for(i = 0; i< n; i++)
     {
          scanf("%d",&a[i]);
     }
     printf("even number are");
     for(i= 0; i< n; i++)
     {
          if(a[i] % 2 == 0)

          printf("%d\n", a[i]);
     }

     printf("odd number are ");
     for(i =0; i<n; i++)
     {
          if(a[i] % 2 != 0)

          printf("%d\n", a[i]);
     }

     return 0;
}