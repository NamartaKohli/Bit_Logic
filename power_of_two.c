#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number;
	printf("Enter number\n");
	scanf("%d", &number);
	if(number & (number-1))
		printf("number is not power of two\n");
	else
		printf("number is power of two\n");

	return EXIT_SUCCESS;
}
