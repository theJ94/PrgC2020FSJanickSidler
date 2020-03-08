#include <stdio.h>

int main(void)
{
	short largeShort = 32760;
	largeShort = largeShort + 12345;
	printf("largeShort = %d\n", largeShort);

	float numerator = 19, denominator = 5, result = 0;
	result = numerator/denominator;
	printf("result = %f\n", result);
	
	float e = 2.718281828f;
	e++;
	printf("e++ = %f\n", e);
	e--;
	printf("e-- = %f\n", e);

	//double dblNumerator = 12.8, rest = 0, teiler = 3;
	//double rest = dblNumerator%teiler;
	//printf("e++ = %f\n", e);	klappt NICHT SO!

	return 0;
}
