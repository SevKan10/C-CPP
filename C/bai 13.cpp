#include <stdio.h>

float a, b;
int findNum[20]; 
int max, min;

int main(){
	
	printf("HAY NHAP SO: ");
	scanf("%f %f", &a, &b);
	
	if (a < 0 || b < 0 || a != int(a) || b != (int)b){
		printf("THU LAI!!!\n");
		return main();
	}
	
	for (int i = 1; i <= a; i++){
		if ((i%(int)b) == 0){
			findNum[i] = i;
			//printf("%i \n", findNum[i]);
		}
	}
	max = findNum[0];	
	for (int i = 1; i <= a; i++){
		if (findNum[i] > max){
			max = findNum[i];
		}
	}
	
	min = findNum[0];	
	for (int i = 1; i <= a; i++){
		if (findNum[i] < min){
			min = findNum[i];
		}
	}
	printf("SO LON NHAT: %i\n", max);
	printf("SO NHO NHAT: %i", min);
	return 0;
}
