#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	int number = 0x12345678;
	if(*((char*)&i) == 1)
		printf("Machine is little endian \n");
	else 
		printf("Machine is big endian \n");
	
	if(*((char*)&number) == 0x78)
		printf("Machine is little endian \n");
	else 
		printf("Machine is big endian \n");

	EXIT_SUCCESS;
}
