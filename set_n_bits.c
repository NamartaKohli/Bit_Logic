#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, pos, n;
	printf("enter input number \n");
	scanf("%d", &num);
	printf("enter the number of bits you ant to set \n");
	scanf("%d", &n);
	printf("enter the bit from where you want to set the bit\n");
	scanf("%d", &pos);
	
	int mask = 0xffffffff;
	num = num | ((~(mask<<n))<<pos+1);
	printf("num %d",num); 
}
