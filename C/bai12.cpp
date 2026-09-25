#include <stdio.h>

unsigned long long n, sum = 0;

int main(){
	printf("ENTER NUMBER N: ");
	scanf("%llu", &n);
	
	if ((n%2) == 0){
		sum = n/2;
		printf("RESULT: %llu", sum);
	}
	else{
		sum = (-n-1)/2;
		printf("RESULT: %llu", sum);
	}
	return 0;
}
