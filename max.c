#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3);

int main() {
	int num1;
	int num2;
	int num3;
	printf("Please enter a number: ");
	scanf("%i", &num1);
	printf("please enter second number: ");
	scanf("%d", &num2);
	printf("please enter a third number: ");
	scanf("%i", &num3);
	printf("%d is the Bigger number\n", max(num1,num2,num3));
	return 0;
}

int max(int num1, int num2, int num3){
	int result;

	if(num1 >= num2 && num1 >= num3)
	{
		result = num1;
	}
	else if(num2>= num1 && num2>= num3)
	{
		result = num2;
	}
	else
	{
		result = num3;
	}
	return result;
}
