#include <stdio.h>
int main()
{
     int a[100], i, j, n, cnt = 0;

     printf("Enter number of elements: ");
     scanf("%d", &n);

     printf("Enter %d elements:\n", n);
     for (i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("prime number is an array an\n");
     for (i = 0; i < n; i++)
     {
          cnt = 0;
          for (j = 1; j <= a[i]; j++)
          {
               if (a[i] % j == 0)
                    cnt++;
          }
          if (cnt == 2)
               printf("%d", a[i]);
     }

     return 0;
}