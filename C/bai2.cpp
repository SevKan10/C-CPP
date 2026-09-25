#include <stdio.h>
#include <math.h>

unsigned int x;

int main(){
	printf("Enter number x to slover: ");
	scanf("%d", &x);
	printf("Your function A(%d) = %d^3 + 3*%d^2 + %d + 1\n", x, x, x, x);
	
	unsigned int Ax = pow(x,3) + 3*pow(x,2) + x +1;
	
	printf("Result: %d", Ax);
	
	return 0;
}

