#include<stdio.h>
int main()
{
int days;
int fine = 0;

printf("enter a number late day");
scanf("%d",&days);

if(days <= 0){
     printf("book return on time");
}
else if(days <= 5){
     fine =days * 1;
     printf(" fine is rs. %d/n" ,fine);

} else if(days <= 10){
     fine = days * 2;
     printf("fine is rs.%d/n",fine);
}else {
     fine =days * 5;
     printf("fine is rs.%d/n",fine);

}
return 0;

 
}