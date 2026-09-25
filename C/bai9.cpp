#include <stdio.h>

double n;

int main(){
	printf("ENTER NUMBER N: ");
	scanf("%lf", &n);
	
	if (n<0 || n!=(long)n){
		printf("FAILED TRY AGAIN\n");
		return main();
	}
	
	unsigned long long sum = (n*(n+1)*(2*n+1))/6;
	
	printf("RESULT: %llu", sum);
	
	return 0;
}
