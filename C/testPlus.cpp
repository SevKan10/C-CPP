#include<stdio.h>

int main(){
	
	int c = 0;
	int b = 0;
	int a = 4;
	int d = 4;
	b=a++;
	c=++d;
	
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
}
