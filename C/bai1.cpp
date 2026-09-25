#include <stdio.h>

int a, b;

int main(){
	
	printf("Enter two number a; b: ");
	scanf("%d %d",&a ,&b);
	printf("Comfirm your number: %d %d",a ,b);
	printf("\n");
	
	int mod = a%b;
	int div = a/b;
	
	printf("Result: \n");
	printf("Div: %d\n", div);
	printf("Mod: %d", mod);
	
	return 0;
}
