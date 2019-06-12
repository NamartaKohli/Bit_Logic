#include<stdio.h>
#include<stdlib.h>
unsigned int changeEndianness(unsigned int number)
{
	unsigned int result =0;
	result |= (number & 0x000000FF)<<24;
	result |= (number & 0x0000FF00)<< 8;
	result |= (number & 0x00FF0000)>>8;
	result |= (number & 0xFF000000)>>24;
	
	return result;
}
int main()
{
	unsigned int number = 0x11223344;
	unsigned int result = changeEndianness(number);
	printf("after conversion = 0x%x\n", result);
	return EXIT_SUCCESS;
}
