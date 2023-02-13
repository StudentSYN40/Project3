#include<stdio.h>

int main()
{
	int log,pas;
	printf("Login = ");
	scanf("%i",&log);
	printf("Password = ");
	scanf("%i",&pas);
	
	if(((log==123)&&(pas==123))||((log==1994)&&(pas==0451))||((log==808)&&(pas==808)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}