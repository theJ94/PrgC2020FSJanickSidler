#include <stdio.h>

int main(void)
{
	//printf("%lu\n", sizeof(char));
	printf("Printing data types sizes ...\n");
	
	printf("Size of char: %ld Byte, %ld Bit\n", sizeof(char), sizeof(char)*8);
	printf("Size of int: %ld Byte\n", sizeof(int));		
	printf("Size of long: %ld Byte\n", sizeof(long));		
	printf("Size of long long: %ld Byte\n", sizeof(long long));		
	printf("Size of float: %ld Byte\n", sizeof(float));		
	printf("Size of double: %ld Byte\n", sizeof(double));
	printf("Size of long double: %ld Byte\n", sizeof(long double));			
	
	return 0;

}
