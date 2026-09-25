#include <stdio.h>

long long a, b; 

int main(){

	printf("Enter two number: ");
	scanf("%lld %lld", &a, &b);
	
	long long sum, minus, multi;
	float div;
	
	sum = a+b;
	minus = a-b;
	multi = a*b;
	div = a/b;
	
	printf("Result: \n")	;
	printf("Tong: %lld\n", sum);
	printf("Hieu: %lld\n", minus);
	printf("Tich: %lld\n", multi);
	printf("Thuong: %.2f", div);
	return 0;
}
