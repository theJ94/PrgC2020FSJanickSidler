#include <stdio.h>
#include <stdlib.h>

void printUsageMessage(void);  // Function Prototype
void printPascalTriangle(int);

const int lowerLimit = 1;
const int upperLimit = 20;

int main(int argc, char *argv[] )

{
	int inputValue = 0;

	if( argc != 2)
	{
		printUsageMessage();
		return 0;
	}

	else
	{
		inputValue = atoi(argv[1]);
		if (inputValue >=lowerLimit && inputValue <= upperLimit)
		{
			printPascalTriangle(inputValue);
		}

		else  //error message
		{
			// no valid input
			printUsageMessage();
			return 0;
		}
	}
	
	return 0;
}

void printUsageMessage(void)
{
	printf("Usage: pascalwholeNUmber\n\t \
		wholeNumber: integer on the interval [%d,%d]\n", lowerLimit, upperLimit);
}

void printPascalTriangle(int numberOfRows)
{
	int coefficient = 1;
	
	for(int i = 1; i <= numberOfRows; i++)
	{
		for(int space = 1; space <= numberOfRows-i; space++) // add space to buid triangle
		{
			printf("   ");
		}
		for(int j = 0; j < i; j++) // loop for columns
		{
			if(j == 0)
			{
				printf("%6d", 1); // %6d outputs a decimal (int) number that fills at least 6 characters spaces
			}
			else
			{
				coefficient = coefficient * (i-j)/j; //calculate the coefficians of each space in the pascal triangle
				printf("%6d", coefficient);
			}
		}
		coefficient = 1;
		printf("\n");
	}
}

