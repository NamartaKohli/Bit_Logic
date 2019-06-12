#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number, bit;
	printf("Enter the number \n");
	scanf("%d", &number);
	printf("Enter the bit you want to set\n");
	scanf("%d", &bit);
	
	number = number |(1<<bit);
	
	printf("number = %d\n", number);
	
	return EXIT_SUCCESS;
}
