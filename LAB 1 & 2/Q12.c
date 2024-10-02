#include <stdio.h>
int main()
{
    char letter;
    int ascii_code;
     
    printf("Enter a letter to know it's ascii code : ");
    scanf("%c",&letter);
    
    ascii_code = letter;
    printf("The ascii code of the letter is %d",ascii_code);
    return 0; 
}
