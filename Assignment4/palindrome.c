#include<stdio.h>
int main()
{
     int n,rev=0,temp=0;
     printf("Enter a number");
     scanf("%d",&n);

     while (n>0)
     {
          int rev = n%10;
          rev = rev * 10 + rev;
          n = n/10;
     }
     if(temp == rev)
     printf("palindrom number");

     else
     printf("Non palindrom number");

     return 0;
     
}