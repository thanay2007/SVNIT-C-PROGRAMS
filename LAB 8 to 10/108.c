#include<stdio.h>
void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    char word1[100]= "Kavya";
    char word2[] = "Bhatiya";

    char copy[10],concate[100];
    
    int length =0;
    while(word1[length] != '\0')
    {
        length++;
    }
    for(int i =0; i < length; i++)
    {
        copy[i] = word1[i];
    }
    copy[length] = '\0';
    puts(copy);

    int length2 =0;
    while(word2[length2] !='\0')
    {
        word1[length+length2] = word2[length2];
        length2++;
    }
    puts(word1);

    if(length == length2)
    {   int flag =1;
        for(int i =0; i < length; i++)
        {
            if(word1[i] != word2[i])
            {
                flag =0;
                break;
            }
        }
        if(flag == 0)
        {
            printf("\nThe two strings are different");
        }
        if(flag ==1)
        {
            printf("\nThe two strings are equal");
        }
    }
    else
    {
           printf("\nThe two strings are different\n");
    }


    for(int i =0; i < (length+length2)/2; i++)
    {
        swap(&word1[i],&word1[length+length2-1-i]);
    }

    puts(word1);
}
