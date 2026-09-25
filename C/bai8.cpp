#include<stdio.h>

double n;

int main(){
	
	printf("HAY NHAP SO N: ");
	scanf("%lf", &n);
	
	if (n<0 || n!= (long long)n){
		printf("fail\n");
		return main();
	}
	unsigned long long sum = (n*(n+1))/2;
	
	printf("RESULT: %llu", sum);
	return 0;
}
