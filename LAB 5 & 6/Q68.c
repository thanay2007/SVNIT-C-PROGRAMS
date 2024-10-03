#include <stdio.h> 
int main() 
{
	int m1[3][3], m2[3][3], mul[3][3];
	printf("Enter the matrix 1 elements: ");
  
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("Enter the matrix 2 elements: ");
  
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("Multiplied matrix: \n");
  
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			mul[i][j] = 0;
			mul[i][j] = m1[i][j] * m2[i][j];
			printf("%d \t", mul[i][j]);
		}
		printf("\n");
	}
}
