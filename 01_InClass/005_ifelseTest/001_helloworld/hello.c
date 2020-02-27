#include<stdio.h>
/*
* our first c program! Epico
*/


// function prototype
int TestFunction(void);

// global variable
int TestValueReturn = 0;

int main(void){
	TestValueReturn = TestFunction();
	printf("Hello World!\nTestValue: %d\n", TestValueReturn); // \n for new line
	return 0;
}

// implementation of TestFunction

int TestFunction(void)
{
	int retVal = 99;
	return retVal;

}

