int main()
{
     int n, i, sum=0;

     printf("Enter a n number");
     scanf("%d",&n);

     for(i=1;i<=n;i+=2)
     {
          sum+=i;
     }
     printf("sum fo 1 to %d is %d",n,sum);

     return 0;
}