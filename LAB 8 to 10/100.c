#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int rollNumber;
    float totalMarks;
    char name[100];

    FILE *file;

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    file = fopen("LNMIITSTUDENT.txt", "w");

    
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);

        
        printf("Enter roll number: \n");
        scanf("%d", &rollNumber);

        printf("enter name: \n");
        fgets(name, sizeof(name), stdin);

        printf("enter marks: \n");
        scanf("%f", &totalMarks);


        fprintf(file, " Roll no. - %d ", rollNumber);
        fprintf(file, " Name - %s ", name);
        fprintf(file, " Total marks - %.3f ", totalMarks);

    }

    
    fclose(file);

    return 0;
}
