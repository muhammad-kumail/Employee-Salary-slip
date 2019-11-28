#include<stdio.h>
#include<conio.h>
float ComputeNetSalary(int,int);
main()
{
    int noE,In,Hw,noHw; float Ap,tSalary=0;int i, tp=0;
    printf("Enter number of epmloyees: ");
    scanf("%d",&noE);
    printf("Enter Employees Data:-\n");
    i=1;
    while(i<=noE)
    {
         printf("\nEmployee %d\n",i);
         printf("Enter Identification number: ");
         scanf("%d",&In);
         printf("Enter hourly wage rate : ");
         scanf("%d",&Hw);
         printf("Enter number of hours worked during a given week : ");
         scanf("%d",&noHw);
         tSalary=ComputeNetSalary(Hw,noHw);
         tp=tp+tSalary;
         i++;
    }
    Ap=tp/noE;
    printf("\nTotal pay roll: %.2f",tSalary);
    printf("\nAverage Salary: %.2f",Ap);
    getch();
}
float ComputeNetSalary(int x,int y)
{
    float net_pay,gross_pay;
    if(y>40)
    {
        x=x*1.5;
        gross_pay=x*y;
        net_pay=gross_pay-(3.625/100)*gross_pay;
    }
    else
    {
        gross_pay=x*y;
        net_pay=gross_pay-(3.625/100)*gross_pay;
    }
    return net_pay;
}
