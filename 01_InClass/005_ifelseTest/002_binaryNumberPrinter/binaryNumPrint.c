#include<stdio.h>

/* binary number printer */

int main(void)
{
	// "programmer input"
	int decNum = 13;
	
	printf("initial Decimal: %d\n", decNum);
	printf("Binary Form (LSD to MSB): 0b");

	// some variable needed for calculation
	int divRes = decNum;
	int remainder;

	while(divRes > 0)
	{
		remainder = divRes%2;
		printf("%d", remainder);
		divRes = divRes/2;
	}
	printf("\n");
	return 0;
}
