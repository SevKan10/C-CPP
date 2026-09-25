#include <stdio.h>
#include <math.h>

unsigned int r; 
const float pi = 3.14;

int main(){
	printf("Enter your radius: ");	scanf("%i", &r);
	
	if (r<1 || r>pow(10,6))	{printf("Value invalied \nPlease enter again\n");	return main();}
	
	float s, c;
	s = pi*pow(r,2);
	c = 2*pi*r;
	
	printf("Result: \n");
	printf("Chu vi: %.2f\n", c);
	printf("Dien tich: %.2f", s);
	
	return 0;	
}
