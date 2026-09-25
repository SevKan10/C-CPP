#include <stdio.h>

double n;

int main(){
	printf("ENTER NUMBER N: "); 
	scanf("%lf", &n);
	
	if (n<0 || n!=(long)n){
		printf("FAILED TRY AGAIN\n");
		return main();
	}
	
	double sum = n/(n+1);
	
	printf("RESULT: %.2lf", sum);
	
	return 0;
}
