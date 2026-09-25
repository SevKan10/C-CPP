#include <stdio.h>
#include <math.h>

int x_1, y_1, x_2, y_2;

int main(){
	
	printf("HAY NHAP TOA DO X1 Y1 X2 Y2:");
	scanf("%i %i %i %i", &x_1, &y_1, &x_2, &y_2);
	
	float dis = sqrt(pow(x_2-x_1, 2) + pow(y_2-y_1, 2));
	
	printf("KHOANG CACH 2 DIEM: %.2f", dis);
	
	return 0;
	
}
