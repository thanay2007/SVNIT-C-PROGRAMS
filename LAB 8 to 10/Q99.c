#include <stdio.h>
#include <ctype.h>

int checkvowel(char c)
{

    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    FILE *file;
    char filename[100], ch;
    int vowels_count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }


    while ((ch = fgetc(file)) != EOF)
    {
        if (checkvowel(ch))
        {
            vowels_count++;
        }
    }

    fclose(file);

    printf("The number of vowels in the file is: %d\n", vowels_count);

    return 0;
}
