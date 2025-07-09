int main()
{
     int num, i = 1;
     printf("enter a number");
     scanf("%d", &num);

     while (i <= num)
     {
          i = i + 2;
     }
     printf(" odd of%dis%d", num, i);

     return 0;
}
