#include <stdio.h>
int findLength(char str[]);
int main() {
    char text[100]; 

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);  

    int length = findLength(text);

    printf("The length of the entered text is: %d\n", length);

    return 0;
}

int findLength(char str[]) {
    int length = 0;

    
    while (str[length] != '\0') {
        length++;
    }

    return length;
}
