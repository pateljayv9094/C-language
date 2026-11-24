#include<stdio.h>
#include<conio.h>

void main()
{
		float celsius;
		float fahrenheit;
		
		printf("The temperature in celsius :");
		scanf("%f",&celsius);
		
		fahrenheit = (celsius * 9/5) + 32;
		
		printf("The temperature in fahrenheit = %.1f",fahrenheit);
}
