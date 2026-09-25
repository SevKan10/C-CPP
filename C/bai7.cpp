#include <stdio.h>

float c;

int main(){
	
	printf("ENTER YOUR TEMP IN C: ");
	scanf("%f", &c);
	if (c!=(int)c || c<0)	{printf("VALUE INVALID\nPLEASE ENTER AGAIN\n");	return main();}
	
	float f = ((float)c*9/5) + 32;
	printf("RESULT TEMP IN F: %.2f", f);
	
	return 0;
}
