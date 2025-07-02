#include<stdio.h>
int main()
{
     int eid;
     char name[100];
     float bs,da,hra,tax,totalsalary,inHand;
     FILE *fp; //File Pointer
     fp = fopen("EmployeeSalarySlip.txt","w");

     printf("enter employee details");
     printf("\nId : ");
     scanf("%d" ,&eid);
     printf("Name : ");
     scanf("%s" , &name);
     printf("Basic salary :");
     scanf("%f" ,&bs);
     printf("da (%%): ");
     scanf("%f", &da);
     printf("HRA (%%) : ");
     scanf("%f" ,&hra);

     if(bs >= 100000)
     tax = 20;
     else if(bs >= 80000)
     tax = 15;
     else if (bs >= 50000)
     tax = 10;
     else if(bs >= 30000)
     tax = 5;
     else
      tax = 0;

      totalsalary = bs + ((bs* (hra+da))/100);
      inHand = totalsalary - (totalsalary*tax)/100;

      fprintf(fp,"\n----------Employee Salary Slip-----------");
      fprintf(fp,"\n\t\tid           : %d",eid); 
      fprintf(fp,"\n\t\tName         : %s",name);
      fprintf(fp,"\n\t\tBasic salary : %f",bs);
      fprintf(fp,"\n\t\tdd(%%)        : %f",da);
      fprintf(fp,"\n\t\tHRA (%%)      : %f", hra);
      fprintf(fp,"\n\t\ttax(%%)       : %f",tax);
      fprintf(fp,"\n\t\ttotalSalary  : %f",totalsalary);
      fprintf(fp,"\n\t\tinhand       : %f", inHand);

      return 0;



}
  