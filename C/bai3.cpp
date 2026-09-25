#include <stdio.h>

unsigned int a, b, c;

int main(){
	
	printf("Enter number a b c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	unsigned int s = a*(b+c) + b*(a+c);
	printf("Result: %d", s);
	
	return 0;
}
