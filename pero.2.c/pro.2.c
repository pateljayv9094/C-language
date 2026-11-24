#include<stdio.h>
#include<conio.h>

void main()
{
	int basesalary,hra,da,ta;
	float totalsalary;
	
	printf("Enter base salary : ");
	scanf("%d",&basesalary);
	
	printf("Enter hra : ");
	scanf("%d",&hra);
	printf("Enter da : ");
	scanf("%d",&da);
	printf("Enter ta : ");
	scanf("%d",&ta);

    totalsalary = basesalary+(basesalary*0.1)+(basesalary*da/100)+(basesalary*ta/100);
    
    printf("your final salary : %2.f",totalsalary);
}
