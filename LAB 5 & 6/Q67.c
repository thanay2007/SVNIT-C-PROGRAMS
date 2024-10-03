#include <stdio.h> 
int main() 
{
	int m1[3][3], m2[3][3], sub[3][3];
	
	printf("Enter the matrix 1 elements:: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m1[i][j]);
		}
	}
  
	printf("\n");
	printf("Enter the matrix 2 elements::\n ");
  
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("Sub matrix(m1-m2):: \n");
  
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sub[i][j] = 0;
			sub[i][j] = m1[i][j] - m2[i][j];
			printf("%d \t", sub[i][j]);
		}
		printf("\n");
	}
}
