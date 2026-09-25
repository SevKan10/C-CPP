#include <stdio.h>
#include <stdlib.h>

int creditAll, subAll, i, j, flag;
float sum;
float point[20]; //[point-10]
int credit[20];

int main()
{
	printf("====================");
	printf("SYSTEM CALCULATE GPA");
	printf("====================\n");
	
	printf("ENTER TOTAL CREDITS AND TOTAL SUBJECTS: ");
	scanf("%i %i", &creditAll, &subAll);
	
	//if (creditAll > 20 || creditAll < 0 || subAll < 0 || creditAll != (int)creditAll || subAll != (int)subAll)	{printf("PLEASE ENTER AGAIN \n"); return 0;}
	
	for (i = 0; i < subAll; i++)
	{
		printf("Enter point subject %i: ", i+1); 
		scanf("%f", &point[i]);
	}
	
	for (j = 0; j < creditAll; j++)
	{
		printf("Enter credit subject %i: ", j+1); 
		scanf("%i", &credit[j]);
		
		flag += credit[j];
		if (flag >= creditAll) {
        	if (flag > creditAll) {
            printf("-> Da du va vuot qua tong so tin chi (%d/%d)!\n", flag, creditAll);
        	} else {
            printf("-> Da nhap du tong so tin chi (%d/%d)!\n", flag, creditAll);
        	}
        break;
    	}
	}
		
	sum = 0;
	for (i = 0; i < subAll; i++)
	{	
		for (int flag1 = 0; flag1 < j; flag1++)
		{	
			sum += point[i]*credit[flag1];		
		}
	}
	
	printf("%f", sum);
	return 0;	
}
