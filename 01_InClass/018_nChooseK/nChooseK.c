#include <stdio.h>
#include <stdlib.h>

/* compute the binomial coefficient of a number */

// prototype
long factorial(int n);
long nChooseK(int n, int k);

int main( int argc, char* argv[] )
{
    int n = 0, k= 0, waitOnValidInput = 1;
	while(waitOnValidInput){
		printf("     *** N CHOOSE K *** EPIC PROGRAM ***\n");
		printf("#################################################\n");
	    printf("Could you please enter a positive integer for n: ");
    	scanf("%d",&n);
	    printf("and a positive integer for k: ");
    	scanf("%d",&k);
		if(n> 0 && k>0) {
		    printf(" The result for %d choose %d is = %ld WOW, Math is COOL!\n", n, k, nChooseK(n, k));
			break;
		}
		else
		{
			printf("You Suck! The invalid input. Try again motherf***.\n");
		}
	}
	return EXIT_SUCCESS;
}

// implementation of the factorial function
long  factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

long nChooseK(int n, int k) {
	long result = 0;
	result = factorial(n)/(factorial(k)*factorial(n-k));

	return result;


}
