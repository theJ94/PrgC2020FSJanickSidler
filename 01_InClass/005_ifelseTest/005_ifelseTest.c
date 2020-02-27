#include <stdio.h>

int main(void)
{
	int testValue = 2;
	int limitValue = 2;

	printf("Give a Number 1");
	scanf("%d", &testValue);

	printf("Give a Number 2");
	scanf("%d", &limitValue);

	if(testValue >= limitValue){
		printf("%d is bigger or equal to %d", testValue, limitValue);
	}

	else {
		printf("%d is less than %d", testValue, limitValue);
	}
	
	return 0;
}
